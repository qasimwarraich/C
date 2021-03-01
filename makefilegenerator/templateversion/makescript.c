#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/* This program generates a barebones Makefile to assist with compiling simple
 * C projects. It recieves a filename either from stdin or as a command line
 * argument. This is then injected into a template Makefile and then output as
 * a new file.
 */

const int MAXLENGTH = 1000;

void makefilescript(char* filename);
bool inputsanitiser(char* string);


int main(int argc, char *argv[])
{
    char filename[MAXLENGTH];

    /* No args, fall back to stdin */
    if (argc == 1){
        printf("\n### MAKE FILE GENERATOR ###\n\n");
        printf("Enter File Name: \n");
        fgets(filename, MAXLENGTH, stdin);

        /* Handles no input case */
        if (filename[0] == '\n'){
            printf("Error: Please supply a filename\n");
            return 1;
        }
    }
    else if (argc > 2){
        printf("Error: Too many arguments\n Please supply only one argument\n");
        return 1;
    }
    else {
        strcpy(filename, argv[1]);
    }
    
    /* Handles file extentions */
    bool extention = inputsanitiser(filename);
    if (extention != true){
        printf("Note: No file extention found, '.c' appended.\n");
        strcat(filename, ".c");
    }

    makefilescript(filename);
    return 0;
}

void makefilescript(char filename[MAXLENGTH])
{
    char file[MAXLENGTH];
    FILE *makefile = fopen("./maketemplate","r");
    FILE *output = fopen("Makefile","w");

    /* Loops through file line by line */
    while (fgets(file, MAXLENGTH, makefile) != NULL){
        /* Default value in template file found */
        if (strstr(file, "makescript.c") != NULL){ 
            fprintf(output, "\t${CC} %s ${CFLAGS}\n", filename);
        }
        /* All other lines */
        else {
            fputs(file, output); 
        }
    }

    fclose(makefile);
    fclose(output);
    printf("\nMakefile for %s generated!\n\n", filename); 
}

/* Searches supplied filename for the dot, and then compares the string form
 * that point vs the .c file extention. It only returns true when the specified
 * filename's extention is exactly ".c" 
 */
bool inputsanitiser(char* str)
{

    /* Trick for removing trailing \n and extraneous chars */
    str[strcspn(str, "\n")] = 0;
    str[strcspn(str, " ")] = 0;

    char* dot = strchr(str,'.');
    if (dot != NULL){
        if (strcmp(dot, ".c") == 0) return true;
        return false;
    }
    else
        return false;
}

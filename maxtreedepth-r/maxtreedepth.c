#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


// Definition for a binary tree node.
 struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
 };
 

int maxDepth(struct TreeNode* root){
    if (root == NULL) return 0;
        else{
            int maxl = maxDepth(root->left);
            int maxr = maxDepth(root->right);
            if (maxl > maxr){
                return maxl +1;
            }
            else {
                return maxr +1;
            }
        }
}


int main(){
    
    
    return 0;
}


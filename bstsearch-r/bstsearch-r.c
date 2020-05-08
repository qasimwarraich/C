/*                                              
------------------------------------------------  
  author      : Q (qasim.warraich@gmail.com)            
  created     : 06/05/2020                       
  filename    : bstsearch-r.c                       
------------------------------------------------  
*/                                                    

#include <stdio.h>
#include <stddef.h>


//  Definition for a binary tree node.
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
 


struct TreeNode* searchBST(struct TreeNode* root, int val){
    if (root == NULL) return NULL;
    if (root -> val == val) return root;
    else if (root -> val < val) return searchBST(root->right, val);
    else return searchBST(root->left, val);
}



int main(){
    
    
    return 0;
}


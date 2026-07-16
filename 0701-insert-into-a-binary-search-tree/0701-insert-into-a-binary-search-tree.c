/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 void check(struct TreeNode* temp,int val){
    if(temp!=NULL){
    if(temp->val<val) {
        if(temp->right!=NULL)
        check(temp->right,val);
        else {
            struct TreeNode* newNode=(struct TreeNode*)malloc(sizeof(struct TreeNode));
            newNode->val=val;
            newNode->left=NULL;
            newNode->right=NULL;
            temp->right=newNode;
        }
    }else{
        if(temp->left!=NULL)
        check(temp->left,val);
         else {
            struct TreeNode* newNode=(struct TreeNode*)malloc(sizeof(struct TreeNode));
            newNode->val=val;
            newNode->left=NULL;
            newNode->right=NULL;
            temp->left=newNode;
        }
    }
    }
 }
struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
      if (root == NULL) {
        struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        newNode->val = val;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
 check(root,val);
    return root;
}
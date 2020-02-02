/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int func(TreeNode* A)
 {
     if(!A)
        return 0;
    return max(1+func(A->left),1+func(A->right));
 }
int Solution::isBalanced(TreeNode* A) {
    if(!A)
        return 1;
    int a=func(A->left);
    int b=func(A->right);
    return abs(a-b)<=1 && isBalanced(A->left) && isBalanced(A->right);
}

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int dfs(TreeNode* A,int B, int sum)
 {
     if(!A)
        return 0;
    if(!A->left && !A->right)
    {
        if(sum+A->val==B)
            return 1;
        else 
            return 0;
    }
    return(dfs(A->left,B,sum+A->val) || dfs(A->right,B,sum+A->val));
 }
int Solution::hasPathSum(TreeNode* A, int B) {
    return dfs(A,B,0);
}

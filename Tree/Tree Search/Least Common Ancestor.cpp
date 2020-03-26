/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode* f(TreeNode* A, int B, int C)
 {
     if(!A)
        return NULL;
    if(A -> val == B || A -> val == C)
    {
        return A;
    }
    TreeNode* l = f(A -> left, B, C);
    TreeNode* r = f(A -> right, B, C);
    if(l && r)
        return A;
    return l ? l : r;
 }
 bool find(TreeNode* root,int B)
 {
     if(!root)
        return false;
     if(root -> val == B)
        return true;
    return find(root -> left,B) || find(root -> right,B);
 }
int Solution::lca(TreeNode* A, int B, int C) {
    if(!A)
        return -1;
    if(!find(A,B) || !find(A,C))
        return -1;
    TreeNode *ans = f(A,B,C);
    if(!ans)
        return -1;
    return ans -> val;
}

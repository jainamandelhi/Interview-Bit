/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode* dfs(TreeNode *A,int B,int C,bool &a1,bool &a2)
 {
     if(!A)
        return NULL;
        //cout<<A->val<<" ";
    if(A->val==B && A->val==C)
    {
        a1=1;
        a2=1;
        return A;
    }
    if(A->val==B)
    {
        a1=1;
        return A;
    }
    if(A->val==C)
    {
        a2=1;
        return A;
    }
    //cout<<a1<<" "<<a2<<endl;
    TreeNode *left=dfs(A->left,B,C,a1,a2);
    TreeNode *right=dfs(A->right,B,C,a1,a2);
    if(left && right)
        return A;
    if(left)
        return left;
    else
        return right;
 }
 bool find(TreeNode *W,int B)
 {
     if(!W)
        return 0;
    if(W->val==B)
        return 1;
    return (W->val==B || find(W->left,B) || find(W->right,B));
 }
int Solution::lca(TreeNode* A, int B, int C) {
    bool a1=0,a2=0;
    TreeNode *W=dfs(A,B,C,a1,a2);
    //cout<<a1<<" "<<a2;
    if((W!=NULL && a1 && a2) ||(a1 && find(W,C)) || (a2 && find(W,B)))
        return W->val;
    else
        return -1;
}

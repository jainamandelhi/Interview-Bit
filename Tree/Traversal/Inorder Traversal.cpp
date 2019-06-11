vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int>v;
    if(!A)
        return v;
    stack<TreeNode*>s;
    TreeNode *B=A;
    while(B)
    {
        s.push(B);
        B=B->left;
    }
    while(!s.empty())
    {
        TreeNode *temp=s.top();
        s.pop();
        v.push_back(temp->val);
        if(temp->right)
        {
            temp=temp->right;
            while(temp)
            {
                s.push(temp);
                temp=temp->left;
            }
        }
    }
    return v;
}

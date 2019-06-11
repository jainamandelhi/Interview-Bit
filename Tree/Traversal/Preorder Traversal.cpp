vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int>v;
    if(!A)
        return v;
    stack<TreeNode*>st;
    st.push(A);
    while(!st.empty())
    {
        TreeNode *temp=st.top();
        st.pop();
        v.push_back(temp->val);
        if(temp->right)
            st.push(temp->right);
        if(temp->left)
            st.push(temp->left);
    }
    return v;
}

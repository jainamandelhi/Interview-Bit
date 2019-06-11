vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    vector<vector<int> >v;
    if(!A)
        return v;
    queue<pair<TreeNode*,int> >q;
    q.push(make_pair(A,0));
    map<int,vector<int> >m;
    map<int,vector<int> > :: iterator itr;
    while(!q.empty())
    {
        TreeNode *temp=q.front().first;
        int se=q.front().second;
        q.pop();
        m[se].push_back(temp->val);
        if(temp->left)
            q.push(make_pair(temp->left,se-1));
        if(temp->right)
            q.push(make_pair(temp->right,se+1));
    }
    v=vector<vector<int> >(m.size());
    int j=0;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        for(int k=0;k<(itr->second).size();k++)
        {
            v[j].push_back((itr->second)[k]);
        }
        j++;
    }
    return v;
}

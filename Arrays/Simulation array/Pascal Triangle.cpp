vector<vector<int> > Solution::solve(int A) {
    int n=A;
    vector<vector<int> >ans;
    for(int i=0;i<n;i++)
    {
        vector<int>temp;
        temp.push_back(1);
        if(i==0)
        {
            ans.push_back(temp);
            continue;
        }
        for(int j=1;j<i+1;j++)
        {
            if(j==ans[i-1].size())
            {
                temp.push_back(1);
                break;
            }
            temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
        }
        ans.push_back(temp);
    }
    return ans;
}

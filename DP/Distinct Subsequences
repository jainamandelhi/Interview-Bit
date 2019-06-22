int Solution::numDistinct(string A, string B) {
    int m=A.size();
    int n=B.size();
    vector<vector<int> >v(n+1,vector<int>(m+1));
    for(int i=0;i<=m;i++)
        v[0][i]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i>j)
                v[i][j]=0;
            else if(A[j-1]==B[i-1])
                v[i][j]=v[i-1][j-1]+v[i][j-1];
            else
                v[i][j]=v[i][j-1];
        }
    }
    /*for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }*/
    return v[n][m];
}

int Solution::anytwo(string A) {
    int n=A.size();
    int v[n+1][n+1];
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)
            v[i][j]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(A[i-1]==A[j-1]&& i!=j)
                v[i][j]=v[i-1][j-1]+1;
            else
                v[i][j]=max(v[i-1][j],v[i][j-1]);
        }
    }
    if(v[n][n]>1)
        return 1;
    else
        return 0;
}

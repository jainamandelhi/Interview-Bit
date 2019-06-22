int Solution::solve(const vector<int> &A) {
    int n = A.size();
    if(n==1)
        return 1;
    map<int,int>m;
    int dp[n+1][n+1];
    memset(dp,-1,sizeof(dp));
    m[A[0]]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            dp[i][j]=2;
            int diff=A[j]-A[i];
            if(m[A[i]-diff])
                dp[i][j]=max(dp[m[A[i]-diff]-1][i]+1,dp[i][j]);
        }
        m[A[i]]=i+1;
    }
    int maxi=-1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            maxi=max(maxi,dp[i][j]);
    return maxi;
}

int dfs(int A,int B,vector<vector<int> >&dp)
{
    if(B<0)
        return 0;
    if(B==0 && A==0)
        return 1;
    if(A==0)
        return 0;
    if(dp[A][B]!=-1)
        return dp[A][B];
    int a=0;
    for(int i=0;i<=9;i++)
        a=a % 1000000007 + dfs(A-1,B-i,dp);
    dp[A][B]=a % 1000000007;
    return dp[A][B];
}
int Solution::solve(int A, int B) {
    vector<vector<int> >dp(A+1,vector<int>(B+1,-1));
    int ans=0;
    for(int i=1;i<=9;i++)
        ans=ans%1000000007 + dfs(A-1,B-i,dp);
    return ans %1000000007;
}

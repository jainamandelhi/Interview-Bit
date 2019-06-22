bool dfs(string A,string B,string C,int i,int j,int k,vector<vector<vector<int> > >&dp)
{
    if(k==C.size())
        return true;
   /* if(i==A.size() || j==B.size())
        return false;*/
    if(dp[i][j][k]!=-1)
        return dp[i][j][k];
    bool a=false;
    if(i<A.size() && A[i]==C[k])
        a = a || dfs(A,B,C,i+1,j,k+1,dp);
    if(j<B.size() && B[j]==C[k])
        a = a || dfs(A,B,C,i,j+1,k+1,dp);
    dp[i][j][k]=a;
    return dp[i][j][k];
}
int Solution::isInterleave(string A, string B, string C) {
    vector<vector<vector<int> > >dp(A.size()+1,vector<vector<int> >(B.size()+1,vector<int>(C.size()+1,-1)));
    return dfs(A,B,C,0,0,0,dp);
}

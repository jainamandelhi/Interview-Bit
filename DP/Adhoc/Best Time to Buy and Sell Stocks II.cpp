 int Solution::maxProfit(const vector<int> &A) {
    int n=A.size();
    int ans[n];
    ans[0]=0;
    for(int i=1;i<n;i++)
        ans[i]=ans[i-1]+max(0,A[i]-A[i-1]);
    return ans[n-1];
}

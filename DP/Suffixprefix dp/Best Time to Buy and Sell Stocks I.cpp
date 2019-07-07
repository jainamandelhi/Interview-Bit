int Solution::maxProfit(const vector<int> &A) {
    int n=A.size();
    if(n==0 || n==1)
        return 0;
    int mini[n];
    int maxi[n];
    for(int i=0;i<n;i++)
    {
        if(i==0)
            mini[i]=A[i];
        else
            mini[i]=min(A[i],mini[i-1]);
    }
    maxi[n-1]=A[n-1];
    for(int i=n-2;i>=0;i--)
        maxi[i]=max(A[i],maxi[i+1]);
    int maxel=0;
    for(int i=0;i<n;i++)
        maxel=max(maxel,maxi[i]-mini[i]);
    return maxel;
}

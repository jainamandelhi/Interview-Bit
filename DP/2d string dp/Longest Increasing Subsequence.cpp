int Solution::lis(const vector<int> &A) {
    int n=A.size();
    int l[n];
    for(int i=0;i<n;i++)
        l[i]=1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(A[i]>A[j])
                l[i]=max(l[i],l[j]+1);
        }
    }
    int maxi=-1;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,l[i]);
    }
    return maxi;
}

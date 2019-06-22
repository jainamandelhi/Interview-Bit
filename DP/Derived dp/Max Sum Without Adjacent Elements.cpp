
int Solution::adjacent(vector<vector<int> > &A) {
    if(A.size()==0)
        return 0;
    int n=A[0].size();
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        arr.push_back(max(A[0][i],A[1][i]));
    }
    if(n==2)
        return max(arr[0],arr[1]);
    for(int i=2;i<n;i++)
        if(i==2)
            arr[i]+=arr[i-2];
        else
            arr[i]=max(arr[i]+arr[i-2],arr[i]+arr[i-3]);
    
    return max(arr[n-2],arr[n-1]);
}

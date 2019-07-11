int Solution::maxSubArray(const vector<int> &arr) {
    int n=arr.size();
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]<0 && sum+arr[i]<maxi)
        {
            sum=0;
            maxi=max(maxi,arr[i]);
            continue;
        }
        sum+=arr[i];
        maxi=max(sum,maxi);
    }
    return maxi;
}

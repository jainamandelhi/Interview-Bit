vector<int> Solution::maxset(vector<int> &arr) {
    long long tempsize=0,tempsum=0,maxsum=INT_MIN,maxsize=INT_MIN;
    vector<int>tempans;
    vector<int>ans;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            tempsum+=arr[i];
            tempans.push_back(arr[i]);
        }
        else
        {
            if(tempsum>maxsum)
            {
                maxsum=tempsum;
                ans=tempans;
            }
            else if(tempsum==maxsum && tempans.size()>ans.size())
            {
                ans=tempans;
            }
            tempsum=0;
            tempans=vector<int>();
        }
    }
    if(tempsum>maxsum)
    {
        maxsum=tempsum;
        ans=tempans;
    }
    else if(tempsum==maxsum && tempans.size()>ans.size())
    {
        ans=tempans;
    }
    return ans;
}

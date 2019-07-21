vector<int> Solution::flip(string A) {
    int n=A.size();
    int a=-1,b=-1;
    int maxi=INT_MIN;
    int temp=0,j=0,i=0;
    for(i=0;i<n;i++)
    {
        if(A[i]=='1')
        {
            temp--;
            if(temp<0)
            {
                j=i+1;
                temp=0;
            }
        }
        else
        {
            temp++;
            if(temp>maxi)
            {
                maxi=temp;
                a=j;
                b=i;
            }
        }
    }
    if(temp>maxi && temp>0)
    {
        maxi=temp;
        a=j;
        b=i;
    }
    vector<int>ans;
    if(a!=-1 && b!=-1)
    {
        ans.push_back(a+1);
        ans.push_back(b+1);
    }
    return ans;
    
}

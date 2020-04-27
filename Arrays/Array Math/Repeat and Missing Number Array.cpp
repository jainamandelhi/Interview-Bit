vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    long xo = 0;
    for(int i = 1; i <= n; i++)
    {
        xo = xo ^ A[i-1] ^ i;
    }
    vector<int>ans;
    int temp = xo ^ (xo&(xo-1));
    int cnt1 = 0, cnt2 = 0, var1 = 0, var2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(temp & (i+1))
        {
            var1 ^= (i+1);
            cnt1++;
        }
        else
        {
            var2 ^= (i+1);
        }
        if(temp & A[i])
        {
            var1 ^= A[i];
            cnt2++;
        }
        else
        {
            var2 ^= A[i];
        }
    }
    if(cnt1 > cnt2)
    {
        ans.push_back(var2);
        ans.push_back(var1);
    }
    else
    {
        ans.push_back(var1);
        ans.push_back(var2);
    }
    return ans;
}

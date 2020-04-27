vector<int> Solution::flip(string A) {
    int n = A.size();
    int i = 0,j = 0, indi = -1, indj = -1;
    int maxi = 0, cnt = 0;
    while(j < n)
    {
        if(A[j] == '0')
        {
            cnt++;
        }
        else
        {
            cnt--;
            if(cnt < 0)
            {
                j++;
                i = j;
                cnt = 0;
                continue;
            }
        }
        if(cnt > maxi)
        {
            maxi = cnt;
            indj = j;
            indi = i;
        }
        j++;
    }
    vector<int>ans;
    if(indi == -1)
        return ans;
    ans.push_back(indi+1);
    ans.push_back(indj+1);
    return ans;
}

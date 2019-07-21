vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int> >ans;
    int n=A.size();
    int i=0,j=0;
    while(j<n)
    {
        int tempj=j;
        vector<int>temp;
        while(i<n && tempj>=0)
        {
            temp.push_back(A[i][tempj]);
            i++;
            tempj--;
        }
        ans.push_back(temp);
        i=0;
        j++;
    }
    j=n-1;
    i=1;
    while(i<n)
    {
        int tempi=i;
        vector<int>temp;
        while(tempi<n && j>=0)
        {
            temp.push_back(A[tempi][j]);
            tempi++;
            j--;
        }
        ans.push_back(temp);
        i++;
        j=n-1;
    }
    return ans;
}

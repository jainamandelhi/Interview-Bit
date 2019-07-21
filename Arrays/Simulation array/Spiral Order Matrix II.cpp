vector<vector<int> > Solution::generateMatrix(int n) {
    vector<vector<int> >ans(n,vector<int>(n,-1));
    int i=0,j=0;
    char ch='r';
    int k=1;
    while(1)
    {
        if(k==n*n)
            break;
        if(j+1<n && ch=='r' && ans[i][j+1]==-1)
        {
            ans[i][j]=k++;
            j++;
        }
        else if(i+1<n && ch=='r' && ans[i+1][j]==-1)
        {
            ans[i][j]=k++;
            ch='d';
            i++;
        }
        else if(i+1<n && ch=='d' && ans[i+1][j]==-1)
        {
            ans[i][j]=k++;
            i++;
        }
        else if(j-1>=0 && ch=='d' && ans[i][j-1]==-1)
        {
            ans[i][j]=k++;
            j--;
            ch='l';
        }
        else if(j-1>=0 && ch=='l' && ans[i][j-1]==-1)
        {
            ans[i][j]=k++;
            j--;
        }
        else if(i-1>=0 && ch=='l' && ans[i-1][j]==-1)
        {
            ans[i][j]=k++;
            i--;
            ch='u';
        }
        else if(i-1>=0 && ch=='u' && ans[i-1][j]==-1)
        {
            ans[i][j]=k++;
            i--;
        }
        else if(j+1<n && ch=='u' && ans[i][j+1]==-1)
        {
            ans[i][j]=k++;
            j++;
            ch='r';
        }
    }
    ans[i][j]=n*n;
    return ans;
}

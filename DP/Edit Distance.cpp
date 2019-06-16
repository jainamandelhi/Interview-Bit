int Solution::minDistance(string a, string b) {
    int n=a.size();
    int m=b.size();
    int v[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
                v[i][j]=max(i,j);
            else if(a[i-1]==b[j-1])
                v[i][j]=v[i-1][j-1];
            else
                v[i][j]=1+min(min(v[i-1][j],v[i-1][j-1]),v[i][j-1]);
        }
    }
   /* for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return v[n][m];
}

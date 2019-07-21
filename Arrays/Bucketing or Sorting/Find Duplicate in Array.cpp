int Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    bool vis[n];
    for(int i=0;i<n;i++) 
        vis[i]=false;
    
    for(int i=0;i<A.size();i++)
    {
        if(!vis[A[i]]) 
            vis[A[i]]=true;
        else return A[i];
    }
}
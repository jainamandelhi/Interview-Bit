int Solution::maxProduct(const vector<int> &A) {
    int n=A.size();
    if(n==1 && A[0]==0)
        return 0;
    int maxi=A[0],mini=A[0],r=A[0];
    for(int i=1;i<n;i++)
    {
        if(A[i]<0){
            swap(maxi,mini);
        }
       maxi=max(A[i],maxi*A[i]);
       mini=min(A[i],A[i]*mini);
       r=max(r,maxi);
    }
    return r;
}

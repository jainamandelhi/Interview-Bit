int Solution::coinchange2(vector<int> &A, int B) {
    int n=A.size();
    vector<int>arr(B+1);
    arr[0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=A[i];j<=B;j++)
            arr[j]+=(arr[j-A[i]])% 1000007;
    }
    return arr[B] % 1000007;
}

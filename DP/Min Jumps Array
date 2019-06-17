int Solution::jump(vector<int> &A) {
    int n=A.size();
    if(n==1)
        return 0;
    int maxreach=A[0],curr=0;
    int steps=1;
    while(1)
    {
        if(maxreach==curr)
            return -1;
        if(maxreach>=n-1)
            return steps;
        int curr1=maxreach;
        for(int i=curr;i<=curr1;i++)
        {
            if(A[i]+i>maxreach)
            {
                maxreach=A[i]+i;
            }
        }
        curr=curr1;
        steps++;
    }
}

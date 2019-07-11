vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long soa=0,s=0,poa=0,p=0;
    long long n=A.size();
    for(long long i=0;i<n;i++){
        soa+=A[i];
        poa+=A[i]*A[i];
        p+=(i+1)*(i+1);
        s+=(i+1);
    }
    //cout<<s<<" "<<soa<<" "<<p<<" "<<poa<<endl;
    long long x=p-poa;
    x/=(s-soa);
    x-=s;
    x+=soa;
    x/=2;
    long long y=s-soa+x;
    //soa-x+y=s;
    //poa*y/x=p;
    vector<int>arr;
    x=int(x);
    y=int(y);
    arr.push_back(x);
    arr.push_back(y);
    return arr;
}

bool z(pair<int,int>a,pair<int,int>b)
{
    return a.second<b.second;
}
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int k) {
    int n=arrive.size(),maxi=-1;
    vector<pair<int,int> >p1;
    vector<pair<int,int> >p2;
    for(int i=0;i<n;i++){
        p1.push_back(make_pair(arrive[i],depart[i]));
        p2.push_back(make_pair(arrive[i],depart[i]));
    }
    sort(p2.begin(),p2.end(),z);    
    sort(p1.begin(),p1.end());
    vector<int>arr(maxi+1);
    for(int i=k;i<n;i++)
    {
        if(p1[i].first<p2[i-k].second)
            return false;
    }
    return true;
}
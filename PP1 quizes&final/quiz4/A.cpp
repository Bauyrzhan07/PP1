#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<int,int> p1,p2;
    map<pair<int,int>,int> mp;
    vector<int>::iterator it;
    vector<int> res;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        p1=make_pair(x,y);
        p2=make_pair(y,x);
        mp.insert(pair<pair<int,int>,int>(p1,0));
        if(mp.find(p2)!=mp.end()&&p1!=p2)
            if(mp[p2]>0)
                mp[p1]+=mp[p2];
        res.push_back(mp[p1]);
    }
    for(it=res.begin();it!=res.end();it++)
        cout<<*it-1<<endl;
    return 0;
}
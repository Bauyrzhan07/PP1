#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,pair<int,int> > mp;
    map<string,pair<int,int> >::iterator it;
    for(int i=0;i<n;i++){
        string studnum;
        int f,s;
        cin>>studnum>>f>>s;
        mp[studnum].first=f;
        mp[studnum].second=s;
    }
    for(it=mp.begin();it!=mp.end();it++){
        if((*it).second.first!=(*it).second.second)
            cout<<(*it).first<<endl;
    }
    return 0;
}
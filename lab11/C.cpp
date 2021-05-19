#include<bits/stdc++.h>
using namespace std;
bool f(pair<string,float> a,pair<string,float> b){
    if(a.second>b.second)
        return true;
    else if(a.second==b.second){
        set<string> s;
        s.insert(a.first);
        s.insert(b.first);
        if(*s.begin()==b.first)
            return true;
        else 
            return false;
    }
    else
        return false;
}
int main(){
    int n,totalpoint=0;
    cin>>n;
    map<string,float> mp;
    vector<pair<string,float> > vec;
    for(int i=0;i<n;i++){
        string name;
        int point;
        cin>>name>>point;
        totalpoint+=point;
        mp[name]+=point;
    }
    for(auto i:mp){
        i.second=(i.second*100)/totalpoint;
        vec.push_back(pair<string,float>(i.first,i.second));
    }
    sort(vec.begin(),vec.end(),f);
    for(auto i:vec)
        cout<<i.first<<" "<<i.second<<"%\n";
    return 0;
}
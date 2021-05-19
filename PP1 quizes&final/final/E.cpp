#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,cnt=0;
    cin>>n;
    vector<string> list;
    vector<pair<string,string> > matches;
    set<string> ans;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        list.push_back(s);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        string s1,s2;
        cin>>s1>>s2;
        matches.push_back(make_pair(s1,s2));
    }
    string s;
    cin>>s;
    for(auto i:matches){
        if(s==i.first){
            cnt++;
            ans.insert(i.second);
        }
        if(s==i.second){
            cnt++;
            ans.insert(i.first);
        }
    }
    cout<<cnt<<endl;
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}
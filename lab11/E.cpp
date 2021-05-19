#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<char> letters;
    map<char,int> mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++)
            letters.insert(s[j]);
        for(auto j:letters)
            mp[j]++;
        letters.clear();
    }
    bool flag=false;
    for(auto i:mp)
        if(i.second==n){
            cout<<i.first<<" ";
            flag=true;
        }
    if(!flag)
        cout<<"NO COMMON CHARACTERS";
    return 0;
}
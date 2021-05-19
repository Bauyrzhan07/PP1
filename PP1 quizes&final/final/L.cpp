#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<int,int> ans;
    for(int i=0;i<t;i++){
        int n,min=INT_MAX,winindex=0;
        cin>>n;
        map<int,pair<int,int> > mp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            mp[x].first++;
            mp[x].second=j+1;
        }
        for(auto i:mp){
            if(i.second.first==1&&i.first<min){
                min=i.first;
                winindex=i.second.second;
            }
        }
        ans[i]=winindex;
    }
    for(auto i:ans){
        if(i.second==0)
            cout<<"ZA WARUDO\n";
        else 
            cout<<i.second<<endl;
    }
    return 0;
}
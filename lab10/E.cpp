#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    map<string,float> mp;
    vector<pair<string,float> > ans;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        for(int j=0;j<m;j++){
            string city;
            float num;
            cin>>city>>num;
            mp[city]+=num;
            sum+=num;
        }
    }
    for(auto i:mp){
        float percentage=(i.second*100)/sum;
        ans.push_back(make_pair(i.first,percentage));
    }
    sort(ans.begin(),ans.end());
    for(auto i:ans)
        cout<<i.first<<" "<<i.second<<endl;
    return 0;
}
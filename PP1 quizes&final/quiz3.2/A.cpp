#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    long x;
    map<int,int> cnt;
    vector<long> answer;
    vector<long>::iterator ansit;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        cnt[x]++;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>x;
        answer.push_back(cnt[x]);
    }
    for(ansit=answer.begin();ansit!=answer.end();ansit++)
        cout<<*ansit<<endl;
    
    return 0;
}
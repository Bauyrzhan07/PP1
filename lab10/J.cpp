#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> seq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        seq.push_back(x);
    }
    
    rotate(seq.begin(),seq.begin()+m,seq.end());
    reverse(seq.begin(),seq.end());
    for(int i=0;i<n;i++)
        cout<<seq.at(i)<<" ";
    return 0;
}
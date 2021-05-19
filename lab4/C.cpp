#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a,cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a;
            if(a<0)
                cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
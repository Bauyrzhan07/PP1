#include<bits/stdc++.h>
using namespace std;
long k_bonnaci(int k,int m){
    if(m==1)
        return 0;
    if(m==2)
        return 1;
    else
        return abs(k_bonnaci(k,m-2)%10)+abs(k*k_bonnaci(k,m-1)%10);
}
int main(){
    long k;
    int m;
    cin>>k>>m;
    cout<<k_bonnaci(k,m)%10;
    return 0;
}
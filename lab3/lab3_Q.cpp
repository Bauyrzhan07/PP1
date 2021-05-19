#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long x;
    cin>>x;
    int n=10000;
    bool flag=true;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
            flag=false;
    if(flag==false)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}
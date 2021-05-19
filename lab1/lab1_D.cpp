#include<iostream>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    int a,b,c,d;
    a=n%2;
    b=(n/2)%2;
    c=(n/4)%2;
    d=(n/8)%2;
    cout<<(a*8)+(b*4)+(c*2)+d;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,o;
    for(int i=1;i<n;i++){
        a=i;
        o=4*a;
        if(6*a==n)
            break;
    }
    cout<<a<<" "<<o<<" "<<a;
    return 0;
}
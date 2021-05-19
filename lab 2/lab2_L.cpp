#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,sum=0,num;
    cin>>n;
    for(int k=0;k<=n;k++){
        if(pow(2,k)>n)break;
        cout<<pow(2,k)<<" ";
    }
    return 0;
}
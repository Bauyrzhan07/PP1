#include<iostream>
using namespace std;
int main(){
    int n,sum=0,num;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i*i>n)break;
        cout<<i*i<<endl;
    }
    return 0;
}
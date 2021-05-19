#include<iostream>
using namespace std;
int main(){
    int n,m,res=0;
    cin>>n>>m;
    while(m%n!=0){
        m--;
        res++;
    }
    cout<<res;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
void primefactor(long n,long factor){
    if(n>=2){
        bool isprime=true;
        for(int i=2;i<factor;i++){
            if(factor%i==0){
                isprime=false;
                break;
            }
        }   
        if(isprime==true)
            if(n%factor==0){
                primefactor(n/factor,factor);
                cout<<factor<<" ";
            }   
        else 
            primefactor(n,factor-1);
    }
}
int main(){
    long n;
    cin>>n;
    bool isprime=true;
    for(int i=2;i<n/2;i++)
        if(n%i==0){
            isprime=false;
            break;
    }
    if(isprime)
        cout<<n;
    else
        primefactor(n,n-1);
    return 0;
}
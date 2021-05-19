#include<iostream>
#include<vector>
using namespace std;
void primefactor(long n){
    vector<long> cont;
    for(long i=2;i<=n;i++){
        bool isprime=true;
        for(long j=2;j<i;j++){
            if(i%j==0)
                isprime=false;
                break;
        }
        if(isprime){
            while(n%i==0){
                cont.push_back(i);
                n/=i;
            }
        }
    }
    for(int i=0;i<cont.size();i++)
        cout<<cont.at(i)<<" ";
}
int main(){
    long n;
    cin>>n;
    bool isprime=true;
    for(int i=2;i<n;i++)
        if(n%i==0){
            isprime=false;
            break;
    }
    if(isprime)
        cout<<n;
    else
        primefactor(n);
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a,n,b,k;
    cin>>a>>n>>b>>k;
    int bina[8],binb[8];
    for(int i=0;i<8;i++){
        bina[i]=a%2;
        a/=2;
    }
    for(int i=0;i<8;i++){
        binb[i]=b%2;
        b/=2;
    }
    if(bina[n]==binb[k])
        cout<<"Money was found";
    else
        cout<<"Where is the money Lebowski?";
    return 0;
}
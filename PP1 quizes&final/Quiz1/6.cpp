#include<iostream>
using namespace std;
int main(){
    int n,slises=0;
    cin>>n;
    if(n==1)
        slises=0;
    else{
        if(n%2==0)
            slises=n/2;
        else
            slises=n;
    }
    cout<<slises;
    return 0;
}
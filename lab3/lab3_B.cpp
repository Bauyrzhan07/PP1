#include<iostream>
using namespace std;
int main(){
    long int n,res=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        if(a[i]>0)
            res++;
    cout<<res;
    return 0;
}
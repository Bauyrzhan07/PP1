#include<iostream>
using namespace std;
int main(){
    int n,l,r;
    cin>>n>>l>>r;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=l-1;i<r;i++)
        for(int j=i+1;j<r;j++){
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
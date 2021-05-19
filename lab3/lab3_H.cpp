#include<iostream>
using namespace std;
int main(){
    int n,l,r;
    long int sum=0;
    cin>>n>>l>>r;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=l-1;i<r;i++)
        sum+=a[i];
    cout<<sum;
    return 0;
}
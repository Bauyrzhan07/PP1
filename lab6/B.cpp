#include<iostream>
#include<algorithm>
using namespace std;
int newarr(int a,int b){
    return abs(a-b);
}
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
        cout<<newarr(a[i],b[i])<<" ";
    return 0;
}
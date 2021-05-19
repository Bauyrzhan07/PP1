#include<iostream>
using namespace std;
int equals(int *a,int *b,int n){
    int res=0,m=n;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[i]==b[j]){
                res++;
                int k=b[j];
                b[j]=b[m-1];
                b[m-1]=k;
                m--;
                break;
            }
    return res;
}
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    cout<<equals(a,b,n);
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],mode[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i]>=a[j]){
                int k=a[j];
                a[j]=a[i];
                a[i]=k;
            }
    for(int i=0;i<n;i++){
        mode[i]=1;
        for(int j=i+1;j<n;j++)
            if(a[i]==a[j])
                mode[i]++;
    }
    int maxmode=0;
    for(int i=0;i<n;i++)
        if(maxmode<mode[i])
            maxmode=mode[i];
    for(int i=0;i<n;i++){
        if(maxmode==mode[i])
            cout<<a[i]<<" ";
    }
    
    return 0;
}
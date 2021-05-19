#include<iostream>
using namespace std;
int main(){
    int n,target;
    cin>>n>>target;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int targeti=0;
    bool flag=false;
    for(int i=1;i<n;i++)
        if(a[i]==target){
            targeti=i;
            flag=true;
        }
    if(flag==false)
        for(int i=0;i<n;i++)
            if(a[i]<target)
                targeti=i;
  
    cout<<targeti+1;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],max=0,min=100;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    int cnt=0;
    bool flag;
    for(int i=min+1;i<max;i++){
        flag=false;
        for(int j=0;j<n;j++){
            if(i==a[j])
                flag=true;
        }
        if(flag==false)
            cnt++;
    }
    cout<<cnt;
    return 0;
}
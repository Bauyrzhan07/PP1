#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,sum=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            cin>>a;
            if(i+j==n-1)
                sum+=a;
        }    
    cout<<sum;
    return 0;
}
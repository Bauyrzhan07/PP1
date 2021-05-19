#include<iostream>
using namespace std;
int main(){
    long int x;
    cin>>x;
    int n=100000;
    bool flag=false;
    for(int i=0;i<n;i++)
        if(i*i==x){
            flag=true;
            break;
        }
    if(flag==true)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
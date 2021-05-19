#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int time=0;
    for(int i=n;i>0;i-=k){
       if((n>k)&&(i==1))
           time+=1;
       else
           time+=2;
    }
    cout<<time;
    return 0;
}
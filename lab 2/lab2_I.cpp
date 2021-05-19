#include<iostream>
using namespace std;
int main(){
    int n,sum=0,num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num%10==7)
            sum++;
    }
    cout<<sum;
    return 0;
}
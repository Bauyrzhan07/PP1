#include<iostream>
using namespace std;
int main(){
    int n,num,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        while(num>0){
            if(num%10==0)
                sum++;
            num/=10;
        }
    }
    cout<<sum;
    return 0;
}
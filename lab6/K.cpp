#include<iostream>
using namespace std;
int sum(int num){
    int sum=0;
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    return sum;   
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
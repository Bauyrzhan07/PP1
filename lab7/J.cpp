#include<iostream>
using namespace std;
int func(long long num){
    if(num>0&&num<10)
        return num/2;
    else
        return func(num/10)+(num%10)/2;
}
int main(){
    long long n;
    cin>>n;
    cout<<func(n);
    return 0;
}
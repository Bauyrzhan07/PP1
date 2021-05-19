#include<iostream>
#include<string>
using namespace std;
string binary(int n){
    if(n==0)
        return 0;
    else{
        cout<<n%2;
        return binary(n/2);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<binary(n);
    return 0;
}
#include<iostream>
using namespace std;
long long sum(){
    int n;
    cin>>n;
    if(n==0)
        return 0;
    else
        return sum()+n;
}
int main(){
    cout<<sum();
    return 0;
}
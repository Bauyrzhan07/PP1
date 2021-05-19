#include<iostream>
using namespace std;
int factorial(int num){
    if(num==0)
        return 1;
    else
        return factorial(num-1)*num;
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);   
    return 0;
}
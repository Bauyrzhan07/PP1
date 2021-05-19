#include<iostream>
using namespace std;
int fibonacci(int num){
    if(num==1)
        return 0;
    if(num==2)
        return 1;
    else
        return fibonacci(num-1)+fibonacci(num-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
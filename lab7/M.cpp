#include<iostream>
using namespace std;
int out(int num,int i){
    if(i==num){
        return num;
    }
    else{
        return out(num,i++);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<out(n,1);
    return 0;
}
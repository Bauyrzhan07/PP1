#include<iostream>
using namespace std;
bool valid(int num){
    bool flag;
    while(num>0){
        num/=10;
        if((num%10)%2==0)
            flag=true;
        else{
            flag=false;
            break;
        }
    }
    return flag;   
}
int main(){
    int n;
    cin>>n;
    if(valid(n))
        cout<<"Valid";
    else
        cout<<"Not valid";
    return 0;
}
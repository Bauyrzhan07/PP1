#include<iostream>
using namespace std;
int istwo(int num){
    if(num==1)
        return true;
    if(num%2!=0)
        return false;
    return istwo(num/2);
}
int main(){
    int n;
    cin>>n;
    if(istwo(n))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sumeven=0,sumodd=0;
    while(n>0){
        int i=1;
        int digit=(n/i)%10;
        if(digit%2==0)
            sumeven+=digit;
        else
            sumodd+=digit;
        i*=10;
        n/=10;
    }
    if(sumeven>sumodd)
        cout<<sumeven;
    else if(sumeven<sumodd)
        cout<<sumodd;
    else
        cout<<sumeven+sumodd;
    return 0;
}
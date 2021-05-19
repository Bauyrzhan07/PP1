#include<iostream>
using namespace std;
int main(){
    int n,even=0,odd=0,num;
    cin>>n;
    for(int k=1;k<=n;k++){
        cin>>num;
        if(num%2==0)
            even++;
            else if(num%2==1)
                odd++;            
    }
    cout<<even<<" "<<odd;
    return 0;
}
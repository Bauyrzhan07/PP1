#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    bool flag=false;
    int digits[5],digitnum;
    for(int i=1,j=0;j<5;i*=10,j++){
        digits[j]=(num/i)%10;
        if(digits[j]<=0){
            digitnum=j;
            break;
        }
    }
    if(digitnum%2==0){
        for(int i=0;i<digitnum/2;i++){
            if(digits[i]==digits[digitnum-i-1])
                flag=true;
            else    
                flag=false;
        }
    }
    else
        for(int i=0;i<digitnum-1/2;i++){
            if(digits[i]==digits[digitnum-i])
                flag=true;
            else    
                flag=false;
        }
    if (flag==true)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
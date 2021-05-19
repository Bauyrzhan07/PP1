#include<iostream>
using namespace std;
string islucky(int num){
    int sum=0,last=num%10;
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    if(sum%last==0)
        return "Yes";   
    else
        return "No";
    
}
int main(){
    int n;
    cin>>n;
    cout<<islucky(n);
    return 0;
}
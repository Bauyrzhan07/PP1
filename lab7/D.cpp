#include<iostream>
using namespace std;
int sumdigits(string num,int digit,int i){
    if(i==num.size()-1)
        return digit;
    else
        return sumdigits(num,int(num[i+1])-48,i+1)+digit;
}
int main(){
    string n;
    cin>>n;
    cout<<sumdigits(n,int(n[0])-48,0);
    return 0;
}
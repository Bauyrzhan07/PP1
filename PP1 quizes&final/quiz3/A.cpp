#include<iostream>
#include<vector>
using namespace std;
int nthprime(int n){
    int value;
    bool flag;
    int cnt=1;
    for(int i=2;cnt<=n;i++){
        flag=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag){
            cnt++;
            value=i;
        }
    }
    return value;
}
int main(){
    int n;
    cin>>n;
    cout<<nthprime(n);
    return 0;
}
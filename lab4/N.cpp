#include<iostream>
using namespace std;
int main(){
    int n,cnt;
    cin>>n;
    bool flag;
    for(int i=2;i<=n;i++){
        flag=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<i<<" is prime"<<endl;
        }
    }
    return 0;
}
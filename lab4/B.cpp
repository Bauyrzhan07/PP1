#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max1=0,max2=0,a;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a;
            if(a>max1){
                max2=max1;
                max1=a;
            }
            if(a<max1&&a>=max2)
                max2=a;
        }
    }
    if(max1==max2)
        cout<<0;
    else
        cout<<max2;
    return 0;
}
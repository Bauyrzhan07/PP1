#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max=0,a;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a;
            if(a>=max)
                max=a;
        }
    }
    cout<<max;
    return 0;
}
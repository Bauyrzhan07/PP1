#include<iostream>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    int max=0,min=1001;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>max)
            max=a;
        if(a<min)
            min=a;
    }
    cout<<max-min;
    return 0;
}
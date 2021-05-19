#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int bridgeheight,crashnum=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>bridgeheight;
        crashnum++;
        if(bridgeheight<=437){
            cout<<"Crash "<<crashnum;
            flag=true;
            break;
            }
    }
    if(flag==false)
        cout<<"No crash";
    return 0;
}
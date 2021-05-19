#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int days=0,heightup=0;
    if((b>=a)&&(n!=a)&&(a<n))
        cout<<"NO";
    else{
        while(heightup!=n){
            heightup+=a;
            if(heightup>=n){
                days++;
                break;
            }
            else
                heightup-=b;
            days++;
        }
            cout<<days;
    }
    return 0;
}
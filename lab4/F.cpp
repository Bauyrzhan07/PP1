#include<iostream>
using namespace std;
int main(){
    int n,a,max=0,posi,posj;
    cin>>n;    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            cin>>a;
            if(a>max){
                max=a;
                posi=i+1;
                posj=j+1;
            }
        }
    cout<<posi<<" "<<posj;
    return 0;
}
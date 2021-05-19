#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,max=-10000,posi,posj;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            cin>>a;
            if(i==j)
                if(max<a){
                    max=a;
                    posi=i;
                    posj=j;
                }
        }    
    cout<<"Maximum element is: "<<max<<" with coordinates: "<<posi+1<<";"<<posj+1;
    return 0;
}
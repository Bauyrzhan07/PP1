#include<iostream>
using namespace std;
int main(){
    int n,m,mark;
    cin>>n>>m;
    int subj[n];
    for(int i=0;i<n;i++){
        subj[i]=0;
        for(int j=0;j<m;j++){
            cin>>mark;
            subj[i]+=mark;
        }
    }
    int res,min=m*100;
    for(int i=0;i<n;i++){
        if(subj[i]<min){
            min=subj[i];
            res=i;
        }
    }
    cout<<res+1;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m],ci[m],cj[m],min[m],sum=0;
    for(int i=0;i<m;i++)
        min[i]=10000;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    for(int j=0;j<m;j++)
        for(int i=0;i<n;i++)
            if(min[j]>a[i][j]){
                min[j]=a[i][j];
                ci[j]=i;
                cj[j]=j;
            }
    cout<<"coordinates of min elements:"<<endl;        

    for(int i=0;i<m;i++){
        sum+=min[i];
        cout<<ci[i]+1<<";"<<cj[i]+1<<endl;
    }
    cout<<"Their sum:"<<endl;
    cout<<sum;
    return 0;
}
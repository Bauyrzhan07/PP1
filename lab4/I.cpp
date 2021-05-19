#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    long long a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            for(long long k=0;k<a[i][j];k++){
                if(k*k==a[i][j]){
                    a[i][j]=k;
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)    
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
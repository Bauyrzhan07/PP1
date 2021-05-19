#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a;
    int sumr[n],sumc[m];
    for(int i=0;i<m;i++)
        sumc[i]=0;
    for(int i=0;i<n;i++){
        sumr[i]=0;
        for(int j=0;j<m;j++){
            cin>>a;
            sumr[i]+=a;
            sumc[j]+=a;
        }
    }
    for(int i=1;i<=n;i++)
        cout<<"The sum of row number "<<i<<" is "<<sumr[i-1]<<endl;
    for(int i=1;i<=m;i++)
        cout<<"The sum of column number "<<i<<" is "<<sumc[i-1]<<endl;

    return 0;
}
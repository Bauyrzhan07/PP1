#include<iostream>
using namespace std;
int N,M;
void transpose(int n,int m,int **a){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout<<a[j][i];
        cout<<endl;
    }
}

int main(){
    cin>>N>>M;
    int a[N][M];
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            cin>>a[i][j];
    transpose(N,M,&a[0]);
    return 0;
}

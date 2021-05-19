#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            a[i][j]='X';
    a[0][0]='*';
    int coordi=0,coordj=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='D'){
            a[coordi+1][coordj]='*';
            coordi++;    
        }
        if(s[i]=='R'){
            a[coordi][coordj+1]='*';
            coordj++;
        }
        if(s[i]=='U'){
            a[coordi-1][coordj]='*';
            coordi--;
        }
        if(s[i]=='L'){
            a[coordi][coordj-1]='*';
            coordj--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<a[i][j];
        cout<<endl;
    }
    return 0;
}
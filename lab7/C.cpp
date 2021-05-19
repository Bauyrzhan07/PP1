#include<iostream>
using namespace std;
bool find(int *a,int n,int x,int i){
    if(i<=n-1){
        if(a[i]==x)
            return true;
        i++;
            return find(a,n,x,i);
    }
    else
        return false;
}
int main(){
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>x;
    int i=0;
    if(find(a,n,x,i))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
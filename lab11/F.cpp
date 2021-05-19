#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,k;
    cin>>a>>b>>k;
    int index=0,div=min(a,b);
    while(1){
        if(a%div==0&&b%div==0)
            index++;
        if(index==k)
            break;
        div--;
    }
    cout<<div;
    return 0;
}
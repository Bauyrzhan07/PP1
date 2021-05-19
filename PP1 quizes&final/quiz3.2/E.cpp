#include<bits/stdc++.h>
using namespace std;
int numdiv(int x){
    int cnt=0;
    if(x==1)
        return 1;
    for(int i=1;i<x;i++)
        if(x%i==0)
            cnt++;
    return cnt;
}
int greatdiv(int x){
    int div=x/2;
    while (x%div!=0)
        div--;
    return div;
}
int formula(int x){
    if(x==1)
        return 1;
    else
        return formula(greatdiv(x))+numdiv(x);
}
int main(){
    int x;
    cin>>x;
    cout<<formula(x);  
    return 0;
}
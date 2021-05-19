#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isprime(int num){
    if(abs(num)==1||abs(num)==0)
        return false;
    for(int i=2;i*i<abs(num);i++)
        if(abs(num)%i==0)
            return false;
    return true;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int res=count_if(a,a+n,isprime);
    cout<<res;;
    return 0;
}
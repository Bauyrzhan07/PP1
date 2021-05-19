#include<bits/stdc++.h>
using namespace std;
bool isdistinct(int n){
    int arr[4],k=0;
    for(int i=1000;i>0;i/=10){
        int digit=(n/i)%10;
        arr[k]=digit;
        k++;
    }
    for(int i=0;i<3;i++)
        for(int j=i+1;j<4;j++)
            if(arr[i]==arr[j])
                return false;
    return true;
}
int main(){
    int year;
    cin>>year;
    year++;
    while(isdistinct(year)==false)
        year++;
    cout<<year;
    return 0;
}
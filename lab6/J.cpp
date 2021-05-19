#include<iostream>
using namespace std;
int max(int *arr){
    int maximum=-100000;
    for(int i=0;i<4;i++)
        if(maximum<arr[i])
            maximum=arr[i];
    return maximum;
}
int main(){
    int a[4];
    for(int i=0;i<4;i++)
        cin>>a[i];
    cout<<max(a);
    return 0;
}
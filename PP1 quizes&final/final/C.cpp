#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    int fence[max];
    set<int> ans;
    for(int i=0;i<n;i++)
        for(int j=0;j<arr[i];j++)
            fence[j]=i;
    for(int i=0;i<max;i++)
        ans.insert(fence[i]);
    cout<<ans.size();
    return 0;   
}
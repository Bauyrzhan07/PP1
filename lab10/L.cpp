#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,size=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        size+=i;
    vector<int> res(size);
    for(int j=0,i=1;i<=n;i++,j+=i)
        fill(res.begin()+j,res.begin()+i,i);
    for(int i=0;i<size;i++)
        cout<<res.at(i)<<" ";
    return 0;
}
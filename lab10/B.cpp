#include<bits/stdc++.h>
using namespace std;
int z=-1;
unsigned long long f(){
    z++;
    return pow(z,z);
}
int main(){
    int n;
    cin>>n;
    vector<unsigned long long> power(n+1);
    generate(power.begin(),power.end(),f);
    for(int i=0;i<n+1;i++)
        cout<<power.at(i)<<" ";
}
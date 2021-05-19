#include<iostream>
#include<cmath>
using namespace std;
int positive(int n){
    return abs(n);
}
int main(){
    int n;
    cin>>n;
    cout<<positive(n);
    return 0;
}
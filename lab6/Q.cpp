#include<iostream>
#include<iomanip>
using namespace std;
float percentage(int n,int m){
    float percent=float(m*100/n);
    return percent;
}
int main(){
    int all,girls;
    cin>>all>>girls;
    cout<<setprecision(3)<<percentage(all,girls);
    return 0;
}
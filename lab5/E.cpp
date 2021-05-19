#include<iostream>
using namespace std;
int main(){
    string n;
    cin>>n;
    int lenght=n.length();
    int sumodd=0,sumeven=0;
    for(int i=0;i<lenght;i+=2)
        sumodd+=int(n[i])-48;
    for(int i=1;i<lenght;i+=2)
        sumeven+=int(n[i])-48;
    if(sumeven==sumodd)
        cout<<"YES";
    else    
        cout<<"NO";
    return 0;
}
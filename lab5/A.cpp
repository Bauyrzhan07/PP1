#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntA=0,cnta=0;
    int lenght=s.length();
    for(int i=0;i<lenght;i++){
        if(int(s[i])>64&&s[i]<91)
            cntA++;
        else if(int(s[i])>96&&s[i]<123)
            cnta++;
    }
    cout<<cnta<<" "<<cntA;
    return 0;
}
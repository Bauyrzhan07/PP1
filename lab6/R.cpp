#include<iostream>
using namespace std;
char upper(char c){
    if(int(c)>96&&int(c)<123)
        return char(int(c)-32);
    else
        return c;
    
}
int main(){
    char c;
    cin>>c;
    cout<<upper(c);
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    bool leap=false;
    if((year%400==0)||((year%4==0)&&(year%100!=0)))
        leap=true;
    if(leap){
        if(year>0&&year<10)
            cout<<"12/09/000"<<year;
        else if(year>10&&year<100)
            cout<<"12/09/00"<<year;
        else if(year>100&&year<1000)
            cout<<"12/09/0"<<year;
        else if(year>1000)
            cout<<"12/09/"<<year;
    }
    else{
        if(year>0&&year<10)
            cout<<"13/09/000"<<year;
        else if(year>10&&year<100)
            cout<<"13/09/00"<<year;
        else if(year>100&&year<1000)
            cout<<"13/09/0"<<year;
        else if(year>1000)
            cout<<"13/09/"<<year;
    }
    return 0;
}
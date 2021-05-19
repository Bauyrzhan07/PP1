#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int hours=0,minutes=0,seconds=0;
    while(n>3600){
        hours++;
        n-=3600;
    }
    while(n>60){
        minutes++;
        n-=60;
    }
    seconds=n;
    if(hours==0)
        cout<<"00";
    else if(hours>0&&hours<10)
        cout<<"0"<<hours;
    else if(hours>=10)
        cout<<hours;
    
    if(minutes==0)
        cout<<":00";
    else if(minutes>0&&minutes<10)
        cout<<":0"<<minutes;
    else if(minutes>=10)
        cout<<":"<<minutes;

    if(seconds==0)
        cout<<":00";
    else if(seconds>0&&seconds<10)
        cout<<":0"<<seconds;
    else if(seconds>=10)
        cout<<":"<<seconds;
    return 0;
}
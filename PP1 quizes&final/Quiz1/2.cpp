#include<iostream>
using namespace std;
int main(){
    int a,b;
    int scoreY=0,scoreNY=0;
    for(int i=0;i<3;i++){
        cin>>a>>b;
        scoreY+=a;
        scoreNY+=b;
    }
    if(scoreY>scoreNY)
        cout<<"Grats Yelnur";
    else if(scoreY<scoreNY)
        cout<<"Hee Hee Losers";
    else
        cout<<"Draw";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void drawchess(vector<string> &coordinates){
    vector<string>::iterator it; 
    for(int i=65;i<=72;i++){
        for(int j=1;j<=8;j++){
            bool flag=false;
            for(it=coordinates.begin();it!=coordinates.end();it++){
                if((int((*it)[0])==i)&&(int((*it)[1])-48==j)){
                    cout<<"*";
                    flag=true;
                    break;
                }
                else
                    flag=false;
            }
            if(flag==false)
                cout<<"0";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    vector<string> coordinates;
    map<char,int> mapcoord;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        coordinates.push_back(x);
    }
    drawchess(coordinates);
    return 0;
}
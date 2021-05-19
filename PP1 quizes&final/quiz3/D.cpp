#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    int flag[t];
    for(int i=0;i<t;i++){
        string s1,s2;
        cin>>s1>>s2;
        flag[i]=0;
        if(s1.size()==s2.size()){
            char let1,let2;
            for(int j=0;j<s1.size();j++){
                let1=s1[j];
                let2=s2[j];
                flag[i]==0;
                if(let1==let2)
                    flag[i]=1;
                if(abs(int(let2)-int(let1))==32)
                    flag[i]=1;
                if((let2=='P'||let2=='B'||let2=='b'||let2=='p')&&(let1=='P'||let1=='B'||let1=='p'||let1=='b'))
                    flag[i]=1;
                if((let2=='E'||let2=='I'||let2=='i'||let2=='e')&&(let1=='E'||let1=='I'||let1=='i'||let1=='e'))
                    flag[i]=1;
                if(flag[i]==0)
                    break;
            }
        }
    }
    for(int i=0;i<t;i++){
        if(flag[i]==1)
            cout<<"Yes";
        else
            cout<<"No";
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int cnteven(string num,int i){
    int res=0;
    if(i<=num.size()-1){
        if(num[i]%2==0)
            res++;
        i++;
        return cnteven(num,i)+res;
    }
    else
        return res;
    
}
int main(){
    string num;
    cin>>num;
    cout<<cnteven(num,0);
    return 0;
}
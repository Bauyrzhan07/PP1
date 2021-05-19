#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char operation;
    char var1,var2;
    int val1,val2;
    vector<char> equation;
    vector<int> answer;
    for(int i=0;i<n;i++){
        cin>>operation;
        cin>>var1>>val1>>var2>>val2;
        equation.push_back(var1);
        equation.push_back(operation);
        equation.push_back(var2);
        equation.push_back('=');
        equation.push_back('0');
        if(operation=='+')
            answer.push_back(val1+val2);
        if(operation=='-')
            answer.push_back(val1-val2);
        if(operation=='*')
            answer.push_back(val1*val2);
    }
    for(int i=0,j=0;i<5*n;i++){
        if((i+1)%5==0){
            cout<<answer.at(j)<<endl;
            j++;
        }
        else
            cout<<equation.at(i)<<" ";
    }
    return 0;
}
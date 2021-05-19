#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ans;
    for(int i=0;i<n;i++){
        string num1,num2;
        cin>>num1>>num2;
        reverse(num1.begin(),num1.begin()+num1.size());
        reverse(num2.begin(),num2.begin()+num2.size());
        string addition=to_string(stoi(num1)+stoi(num2));
        reverse(addition.begin(),addition.begin()+addition.size());
        ans.push_back((stoi(addition)));
    }
    for(auto i:ans)
        cout<<i<<endl;
    return 0;
}
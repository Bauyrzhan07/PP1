#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
void problemA(){
    vector<int> v;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
        cout<<v.at(i)<<" ";
}
void problemB(){
    vector<int> v;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
        cout<<v.at(i)<<" ";
}
void problemC(){
    vector<int> v;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int a,b;
    cin>>a>>b;
    reverse(v.begin()+a,v.begin()+b+1);
    for(int i=0;i<n;i++)
        cout<<v.at(i)<<" ";
}
void problemD(){
    vector<int> v;
    int n,x,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>k;
    v.erase(v.begin()+k);
    for(int i=0;i<n-1;i++)
        cout<<v.at(i)<<" ";
};
void problemE(){
    vector<int> v;
    int n,x,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        v.at(i)=-1;
    for(int i=0;i<n;i++) {
        if(v.at(i)!=-1)
            cout << v.at(i) << " ";
    }
}
void problemF(){
    vector<int> v;
    int n,x,k,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>k>>a;
    vector<int>::iterator it;
    it = v.begin()+k;
    v.insert(it,a);
    for(int i=0;i<n+1;i++)
        cout<<v.at(i)<<" ";
}
bool isPrime(int num){
    bool flag=true;
    for(int i=2;i<num;i++){
        if(num%i==0) {
            flag = false;
            break;
        }
    }
    return flag;
}
void problemG(){
    vector<int> v;
    int n,x,k,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>k;
    for(int i=0;i<n;i++){
        if(v.at(i)>=k)
            if(isPrime(v.at(i)))
                cnt++;
    }
    cout<<cnt;
}
void problemH(){
    vector<int> v;
    int n,x,k,contain;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>k;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v.at(i)>v.at(j)) {
                contain = v.at(i);
                v.at(i) = v.at(j);
                v.at(j) = contain;
            }
        }
    }
    for(int i=0;i<k;i++)
        cout<<v.at(i)<<" ";
}
void problemI(){
    vector<int> v;
    int n,x,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>k;
    bool flag=false;
    for(int i=0;i<n;i++)
        if(v.at(i)==k){
            flag=true;
            break;
        }
    if(flag)
        cout<<"Yes";
    else
        cout<<"No";
}
void problemJ(){
    vector<int> v;
    int n,x,k,contain;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v.at(i)>v.at(j)) {
                contain = v.at(i);
                v.at(i) = v.at(j);
                v.at(j) = contain;
            }
        }
    }
    cout<<v.back()-v.front();
}
void problemK(){
    vector<int> v;
    int n,x,k,contain,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>k;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v.at(i)>v.at(j)) {
                contain = v.at(i);
                v.at(i) = v.at(j);
                v.at(j) = contain;
            }
        }
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<k;i++)
        sum+=v.at(i);
    cout<<sum;
}
void problemL(){
    set<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    cout<<s.size();
}
void problemM(){
    set<int> s;
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    set<int>::iterator it;
    it=s.begin();
    while(it!=s.end()){
        sum+=*it;
        it++;
    }
    cout<<sum;
}
void problemN(){
    set<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    set<int>::iterator it;
    it=s.begin();
    set<int> v;
    while(it!=s.end()){
        if (*it % 2 != 0)
            v.insert(*it);
        it++;
    }
    it=v.begin();
    while (it!=v.end()){
        cout<<*it<<" ";
        it++;
    }
}
void problemO(){
    set<char> s;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
        if(int(str[i])>64&&int(str[i])<91)
            str[i]=char(int(str[i])+32);
    for(int i=0;i<str.size();i++)
        s.insert(str[i]);
    set<char>::iterator it;
    it=s.begin();
    cout<<s.size()<<endl;
    while(it!=s.end()){
        cout<<*it<<" ";
        it++;
    }
}
int main(){
    problemN();
    return 0;
}
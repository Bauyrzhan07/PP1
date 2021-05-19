#include <iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include <stack>
using namespace std;
void problemA(){
    int n;
    cin>>n;
    multimap<int,int> coordinates;
    multimap<int,int>::iterator itr;
    for(int i=0;i<n;i++) {
        int x, y;
        cin >> x >> y;
        coordinates.insert(pair<int, int>(x, y));
    }
    for(itr=coordinates.begin();itr!=coordinates.end();itr++)
        cout<<itr->first<<" "<<itr->second<<endl;
}
void problemB(){
    int n;
    cin>>n;
    vector<int> container;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
    }
}
void problemC(){
    int n,res=0;
    cin>>n;
    map<int,int> cnt;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cnt[x]++;
    }
    map<int,int>::iterator itr;
    for(itr=cnt.begin();itr!=cnt.end();itr++)
        if(itr->second>1)
            res++;
    cout<<res;
}
void problemD(){
    int n,k;
    cin>>n>>k;
    multiset<int> cont;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cont.insert(x);
    }
    cout<<cont.count(k);
}
void problemE(){
    int n,res=0;
    cin>>n;
    map<string,int> numbers;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        numbers[x]++;
    }
    map<string,int>::iterator itr;
    for(itr=numbers.begin();itr!=numbers.end();itr++)
        if(itr->second==3)
            res++;
    cout<<res;
}
void problemF(){
    string s;
    cin>>s;
    bool flag=true;
    stack<char> seq;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')
            seq.push(s[i]);
        else if(s[i]==')'&&seq.empty()){
            flag=false;
            break;
        }
        else
            seq.pop();
    }
    if(flag&&seq.empty())
        cout<<"YES";
    else
        cout<<"NO";
    }
void problemG(){
    string s;
    cin>>s;
    queue<char> q;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0')
            q.push(s[i]);
        else if(s[i]=='1'&&s[i+1]=='1')
            i++;
        else
            q.push(s[i]);
    }
    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }
}
void problemH(){
    int n;
    cin>>n;
    multiset<string> ms;
    map<string,int> si;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        if(ms.find(s)==ms.end()) {
            ms.insert(s);
            si.insert(pair<string,int>(s,i));
        }
    }
    multiset<string>::iterator it;
    for(it=ms.begin();it!=ms.end();it++)
        cout<<(*it)<<" "<<si[*it]<<endl;
}
void problemI(){
    int n;
    cin>>n;
    multiset<string> namelist;
    string res[n];
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        if(namelist.find(name)==namelist.end()) {
            namelist.insert(name);
            res[i] = "new user added";
        }
        else
            res[i]="user already exists";
    }
    for(int i=0;i<n;i++)
        cout<<res[i]<<endl;
}
void problemJ(){
    int n;
    cin>>n;
    map<string,int> dora;
    set<string> res;
    for(int i=0;i<n;i++){
        string name;
        int ep;
        cin>>name>>ep;
        if(res.find(name)==res.end()){
            res.insert(name);
            dora.insert(pair<string,int>(name,ep));
        }
        else
            dora[name]+=ep;
    }
    set<string>::iterator it;
    for(it=res.begin();it!=res.end();it++){
        cout<<*it<<" "<<dora[*it]<<endl;
    }
}
void problemK(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){

    }
}
void problemL(){
    int n;
    cin>>n;
    multimap<int,int> mp;
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        mp.insert(pair<int,int>(x+y,i));
    }
    multimap<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
        cout<<(*it).second<<" ";
}
void problemM(){
    int n;
    cin>>n;
    queue<string> ticket;
    string res[n];
    for(int i=0;i<n;i++){
        int action;
        string name;
        cin>>action;
        if(action==1) {
            cin>>name;
            ticket.push(name);
        }
        else
            ticket.pop();
        if(ticket.empty())
            res[i]="queue is empty";
        else
            res[i]=ticket.front();
    }
    for(int i=0;i<n;i++)
        cout<<res[i]<<endl;
}
void problemN(){
    int n;
    cin>>n;
    multiset<int> a;
    int cnt;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.insert(x);
    }
    multiset<int>::iterator it=a.begin();
    multiset<int>::iterator jt=a.begin()++;
    for(;it!=a.end();it++){
        for(;jt!=a.end();jt++){
            int n=*it^*jt;
            if(a.find(n)!=a.end())
                cnt++;
        }
    }
    cout<<cnt;
}
void problemO(){
    int n,m;
    cin>>n;
    map<string,string> logpas;
    map<string,string>::iterator it;
    string login,password;
    for(int i=0;i<n;i++){
        cin>>login>>password;
        logpas.insert(pair<string,string>(login,password));
    }
    cin>>m;
    string res[m];
    for(int i=0;i<m;i++){
        cin>>login>>password;
        it=logpas.find(login);
        if(it!=logpas.end()){
            if(logpas[login]==password)
                res[i]="correct password";
            else
                res[i]="password error";
        }
        else
            res[i]="login error";
    }
    for(int i=0;i<m;i++)
        cout<<res[i]<<endl;
}

int main() {
    problemA();
    return 0;
}

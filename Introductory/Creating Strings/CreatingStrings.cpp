#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100005
#define BIGINT 1000000009

map<string,int> store;

void getalls(string s,int l,int r){
    if(l==r){
        if(!store[s]){
            store[s]=1;
        }
    }
    else{
        for(int i=l;i<=r;i++){
            swap(s[l],s[i]);
            getalls(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
}

int main(){
    string s;
    cin>>s;
    getalls(s,0,s.size()-1);
    cout<<store.size()<<endl;
    for(auto x:store){
        cout<<x.first<<endl;
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
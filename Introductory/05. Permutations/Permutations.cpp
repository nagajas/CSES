#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100005
#define BIGINT 1000000009
int main(){
    ll n;
    cin>>n;
    if(n==1) cout<<1<<endl;
    else if(n==2 || n==3){
        cout<<"NO SOLUTION"<<endl;
    }
    else if(n==4){
        cout<<3<<" "<<1<<" "<<4<<" "<<2;
    }
    else{
        vector<int> o,e;
        for(int i=1; i<=n; i++){
            if (i%2==1) o.push_back(i);
            else e.push_back(i);
        }
        for(int i=0; i<o.size(); i++){
            cout<<o[i]<<" ";
        }
        for(int i=0; i<e.size();i++){
            cout<<e[i]<<" ";
        }
    }
}

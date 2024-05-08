#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100005
#define BIGINT 1000000009

void solve(ll y,ll x){
    ll m =max(x,y);
    ll start=-1;
    if(m==x){
        if(m%2){
            start = m*m;
            cout<<start-y+1<<endl;
        }
        else{
            start = (m-1)*(m-1)+1;
            cout<<start+y-1<<endl;
        }
    }
    else{
        if(m%2==0){
            start = m*m;
            cout<<start-x+1<<endl;
        }
        else{
            start = (m-1)*(m-1)+1;
            cout<<start+x-1<<endl;
        }
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll y,x;
        cin>>y>>x;
        solve(y,x);
    }
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5;j++){
    //         solve(i,j);
    //     }
    // }
}
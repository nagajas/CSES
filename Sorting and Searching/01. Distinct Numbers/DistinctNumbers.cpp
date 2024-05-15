#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100005
#define BIGINT 1000000009

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("in.txt", "r", stdin);
//     freopen("error.txt", "w", stderr);
//     freopen("out.txt", "w", stdout);
// #endif


    int n;
    cin>>n;
    ll a[n];
    map<ll,ll> m;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(m[x]){
            m[x]+=1;
        }
        else{
            m[x]=1;
        }
    }
    cout<<m.size()<<endl;
    
    

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
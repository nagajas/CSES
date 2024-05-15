#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100005
#define BIGINT 1000000009

ll search_all(vector<ll> p, ll S) {
    ll diff = INT_MAX;
    for (ll b = 0; b < (1<<p.size()); b++) {
        vector<ll> subset;
        for (int i = 0; i < p.size(); i++) {
            if (b&(1<<i)) subset.push_back(i);
        }
        ll s = 0;
        for(ll i=0;i<subset.size();i++){
            s += p[subset[i]];
        }
        diff = min(diff, abs(S-2*s));
    }
    return diff;
}

int main(){
// #ifndef ONLINE_JUDGE  
//     freopen("in.txt", "r", stdin); 
//     freopen("error.txt", "w", stderr); 
//     freopen("out.txt", "w", stdout); 
// #endif

    int n;
    cin>>n;

    vector<ll> a(n);
    ll S = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        S += a[i];
    }
    //search(a,{},0);
    ll ans = search_all(a, S);
    cout<<ans<<endl;
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
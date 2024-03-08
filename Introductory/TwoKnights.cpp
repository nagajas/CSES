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

    ll n;
    cin >> n;
    for(ll i=1; i<=n;i++){
        cout<<i*i*(i*i-1)/2 - (4 * (i - 2) * (i - 1))<<endl;
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
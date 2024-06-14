#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100005
#define BIGINT 1000000007

int main(){
// #ifndef ONLINE_JUDGE  
//     freopen("in.txt", "r", stdin); 
//     freopen("error.txt", "w", stderr); 
//     freopen("out.txt", "w", stdout); 
// #endif

    int n;
    cin>>n;
    
    ll res=1;
    for(int i=1;i<=n;i++){
        res=2*res;
        res=res%BIGINT;
    }
    cout<<res%BIGINT<<endl;


    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100006
#define BIGINT 1000000009

int main(){
// #ifndef ONLINE_JUDGE  
//     freopen("in.txt", "r", stdin); 
//     freopen("error.txt", "w", stderr); 
//     freopen("out.txt", "w", stdout); 
// #endif

    int n,x;
    cin>>n>>x;
    int c[n];
    vector<int> dp(x+1,-1);

    int mn = x+1;
    for(int i=0;i<n;i++){
        cin>>c[i];
        dp[c[i]]=1;
        mn = min(mn,c[i]);
    }

    // for(int i=0;i<x+1;i++) cout<<i<<"->"<<dp[i]<<" ";
    // cout<<endl;
    for(int i=mn+1;i<x+1;i++){
        int a,flag=0;
        if(dp[i]!=-1) a = dp[i];
        else a = x+1;
        for(int j=1;j<i;j++){
            if(dp[i-j] && dp[j]) {
                a = min(a,dp[i-j]+dp[j]);
                flag=1;
            }
        }
        if(flag) dp[i]=a;
    }
    //for(int i=0;i<x+1;i++) cout<<i<<"->"<<dp[i]<<" ";
    cout<<dp[x]<<endl;
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
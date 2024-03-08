#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100005
#define BIGINT 1000000009

void div2(int n){

    vector<int> dp (n+1,0);

    if((n*(n+1)/2)%2==0){
        cout<<"YES"<<endl;
        if(n%2){
            cout<<(n-1)/2<<endl;
            int sm = 0;
            for(int i=0;i<=n && sm!=n*(n+1)/4;i++){
                if(i==0){
                    cout<<n-i<<" ";
                    sm+= n-i;
                    dp[n-i]=1;
                    continue;
                }
                cout<<i<<" "<<n-i<<" ";
                sm+=n;
                dp[i]=1;
                dp[n-i]=1;
            }
            cout<<endl;
            cout<<n-(n-1)/2<<endl;
            for(int i=1;i<=n;i++){
                if(dp[i]==0){
                    cout<<i<<" ";
                }
            }
            cout<<endl;
        }
        else{
            cout<<n/2<<endl;
            int sm = 0;
            for(int i=1;i<=n/4;i++){
                cout<<i<<" "<<n-i+1<<" ";
                dp[i]=1;
                dp[n-i+1]=1;
            }
            cout<<endl;
            cout<<n/2<<endl;
            for(int i=1;i<=n;i++){
                if(dp[i]==0){
                    cout<<i<<" ";
                }
            }
            cout<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
// #ifndef ONLINE_JUDGE  
//     freopen("in.txt", "r", stdin); 
//     freopen("error.txt", "w", stderr); 
//     freopen("out.txt", "w", stdout); 
// #endif

    int n;
    cin>>n;
    div2(n);
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
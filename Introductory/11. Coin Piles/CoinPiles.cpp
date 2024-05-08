#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100005
#define BIGINT 1000000009

int main(){
#ifndef ONLINE_JUDGE  
	freopen("in.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("out.txt", "w", stdout); 
#endif

    int tt;
    cin>>tt;
    while(tt--){
        ll a,b;
        cin>>a>>b;
        ll x = 2*a-b, y=2*b-a;
        if(x>=0 && y>=0){
            if(x%3==0 && y%3==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100005
#define BIGINT 1000000009
int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll m = a[0],cost = 0;
    for(ll i=1; i<n; i++){
        if(a[i]<m){
            cost+=(m-a[i]);
        }
        else{
            m=a[i];
        }
    }
    cout<<cost<<endl;

    return 0;
}

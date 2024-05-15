#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ll n;
    scanf("%lld",&n);
    ll a [n],sm =  INT_MIN;
    for(ll i=0; i<n; i++) {
        scanf("%lld",&a[i]);
        sm = max(sm, a[i]);
    }
    ll curr = 0;
 
    for(ll i=0; i<n; i++){
        if(curr+a[i] < 0) curr = 0;
        else{
            curr += a[i];
            sm = max(sm,curr);
        }
    }
    printf("%lld\n",sm);
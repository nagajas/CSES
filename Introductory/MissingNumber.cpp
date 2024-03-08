#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll a[n-1];
    ll sm=0;
    for(ll i=0;i<n-1;i++){
        cin>>a[i];
        sm+=a[i];
    }
    cout<<n*(n+1)/2 - sm<<endl;
    return 0;
}
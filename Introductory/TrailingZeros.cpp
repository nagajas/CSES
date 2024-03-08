#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MAXN 100005
#define BIGINT 1000000009

ld log5(ld x){
    return log(x)/log(5);
}
int main(){
    ld n;
    cin>>n;
    ld lim = log5(n);
    ld res=0;
    for(ld i=1;i<=floor(lim);i++){
        res+=floor(n/pow(5,i));
    }
    cout<<(ll)res<<endl;
    return 0;
}
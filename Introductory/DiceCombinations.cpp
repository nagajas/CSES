#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int DP[1000001];
int ways(int n){
    if (DP[n] != 0) {
        return DP[n];
    }
    for (int i = 1; i <= 6; i++) {
        if (n - i >= 0) {
            DP[n] += ways(n - i);
            DP[n] %= MOD;
        }
    }
    return DP[n];
}

int main(){
    int n;
    memset(DP, 0, sizeof(DP));
    DP[0] = 1;
    cin>>n;
    cout<<ways(n)<<endl;
    return 0;
}
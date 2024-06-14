#include<cstdio>
#include<math.h>
#include<string>
#include<iostream>

using namespace std;

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        long long int  d = 1;
        long long int k;
        scanf("%lld",&k);
        long long sum = 0, p=1;
        while(sum+9*d*p < k){
            sum += 9*d*p;
            p*=10;
            d++;
        }
        k-=sum;
        int pos = (k-1)%d;
        long long int ans = p+(k-1)/d;
        string s = to_string(ans);
        cout<<s[pos]<<"\n";
    }
    return 0;
}
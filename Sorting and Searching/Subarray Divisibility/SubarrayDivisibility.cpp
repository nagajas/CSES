#include<cstdio>
#include<map>
using namespace std;

int main(){
    int n, x;
    scanf("%d", &n);
    long long sum = 0;
    map<int, int> m;
    m[0] = 1;
    long long ans = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        sum += x;
        sum = (sum%n + n)%n;
        ans += m[sum];
        m[sum]++;
    }
    printf("%lld\n", ans);
    return 0;
}
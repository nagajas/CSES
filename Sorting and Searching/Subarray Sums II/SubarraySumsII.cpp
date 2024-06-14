#include<cstdio>
#include<map>
using namespace std;

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    map<long long, long long> m;
    long long count = 0, sum = 0;
    m[0] = 1;
    for(int i = 0; i < n; i++) {
        sum += a[i];
        count += m[sum - x];
        m[sum]++;
    }
    printf("%lld\n", count);
}
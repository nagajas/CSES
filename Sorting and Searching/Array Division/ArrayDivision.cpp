#include<cstdio>
#include<algorithm>

using namespace std;

int n, k;
int a[200005];

bool check(long long x) {
    long long sum=0, cnt=0;
    for (int i=0; i<n;i++) {
        if (a[i]>x) return false;
        if (sum+a[i]>x) {
            sum=a[i];
            cnt++;
        }
        else sum += a[i];
    }
    return cnt < k;
}

int main() {
    scanf("%d %d", &n,&k);
    for (int i=0; i<n;i++) scanf("%d", &a[i]);
    long long l=1, r=1e18;
    while (l<r) {
        long long mid = l+(r-l)/2;
        if(check(mid)) r=mid;
        else l=mid+1;
    }
    printf("%lld\n", l);
    return 0;
}
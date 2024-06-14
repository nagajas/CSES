#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    pair<int, int> a[n];
    for(int i=0;i<n;i++) scanf("%d %d", &a[i].first, &a[i].second);
    sort(a, a+n);
    long long ans = 0, sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i].first;
        ans += a[i].second-sum;
    }
    printf("%lld\n", ans);
    //fprintf(stderr, "Time taken: %fs\n", (double)clock() / CLOCKS_PER_SEC);
}
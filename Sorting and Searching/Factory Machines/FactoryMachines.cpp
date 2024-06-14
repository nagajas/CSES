#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    int n, t;
    scanf("%d %d", &n, &t);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    long long l = 1, r = 1e18-1;
    while(l<r){
        long long m = (l+r)/2;
        long long sum = 0;
        for(int i=0;i<n;i++){ 
            sum += m/a[i]; 
            if(sum>=t) break;
        }
        if(sum>=t) r = m;
        else l = m+1;
    }
    printf("%lld\n", l);
    //fprintf(stderr, "Time taken: %.2fs\n", (double)clock() / CLOCKS_PER_SEC);
}
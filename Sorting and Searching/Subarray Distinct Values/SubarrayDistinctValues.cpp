#include<cstdio>
#include<map>

using namespace std;

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    map<long long, int> m;
    int l = 0, r = 0;
    long long ans = 0;
    for(int r=0;r<n;r++){
        m[a[r]]++;
        while(m.size() > k){
            m[a[l]]--;
            if(m[a[l]] == 0) m.erase(a[l]);
            l++;
        }
        ans += r-l+1;
    }
    printf("%lld\n", ans);
    return 0;
}
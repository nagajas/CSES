#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
    int n, x;
    scanf("%d %d", &n, &x);
    pair<int, int> a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i].first);
        a[i].second = i+1;
    }
    sort(a, a+n);
    for(int i=0;i<=n-2;i++){
        int l = i+1, r = n-1;
        while(l<r){
            int curr = a[i].first + a[l].first + a[r].first;
            if(curr == x){
                printf("%d %d %d\n", a[i].second, a[l].second, a[r].second);
                return 0;
            }
            else if(curr < x) l++;
            else r--;
        }
    }
    printf("IMPOSSIBLE\n");
}
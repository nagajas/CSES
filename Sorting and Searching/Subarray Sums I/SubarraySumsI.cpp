#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
    int n,x;
    scanf("%d %d", &n, &x);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    int l=0,r=0,sum=a[0],ans=0;
    while(r<n){
        if(sum==x){
            ans++;
            sum -= a[l];
            l++;
        }else if(sum < x){
            r++;
            if(r < n) sum += a[r];
        }else{
            sum -= a[l];
            l++;
        }
    }
    printf("%d\n", ans);
}
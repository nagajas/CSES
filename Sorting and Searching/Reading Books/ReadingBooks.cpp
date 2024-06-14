#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    long long sum=0, m = 0, x;
    for(int i=0;i<n;i++){
        scanf("%lld", &x);
        sum += x;
        m = max(m, x);
    }
    m = max(2*m, sum);
    printf("%lld\n", m);

}
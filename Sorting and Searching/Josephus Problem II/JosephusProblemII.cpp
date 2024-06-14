// CSES Problem Set - Sorting and Searching - Josephus Problem II (https://cses.fi/problemset/task/2163/)
// Solution by: nagajas

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    
    ordered_set s;
    for(int i=1;i<=n;i++) s.insert(i);
    int prev = 0;
    for(int i=0;i<n-1;i++){
        int curr = (prev+k)%(n-i);
        prev = curr;
        
        auto y = s.find_by_order(curr);
        printf("%d ",*y);
        s.erase(y);
    }
    printf("%d\n",*s.begin());
    //printf("time taken : %f secs\n", (float)clock() / CLOCKS_PER_SEC);
    return 0;
}
// Result: ACCEPTED
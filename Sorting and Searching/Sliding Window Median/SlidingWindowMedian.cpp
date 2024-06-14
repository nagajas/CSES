#include<cstdio>
#include<vector>
#include<set>

using namespace std;

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    vector<int> nums(n);
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    multiset<int> window(nums.begin(), nums.begin() + k);
    auto mid = next(window.begin(), k/2-(1-k%2));
    for(int i=k; i<=n; i++){
        printf("%d ", *mid);
        if(i==n) break;
        window.insert(nums[i]);
        if(nums[i] < *mid) mid--;
        if(nums[i-k] <= *mid) mid++;
        window.erase(window.lower_bound(nums[i-k]));
    }
    printf("\n");
    return 0;
}
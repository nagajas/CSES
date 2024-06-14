#include<cstdio>
#include<algorithm>
#include<vector>
#include<tuple>

using namespace std;

bool cmp(tuple<int,int,int> a, tuple<int,int,int> b){
    if(get<0>(a) != get<0>(b)) return get<0>(a) < get<0>(b);
    return get<1>(a) > get<1>(b);
}

int main(){
    int n;
    scanf("%d", &n);
    vector<tuple<int,int,int> > a(n);
    for(int i=0;i<n;i++){
        int l, r;
        scanf("%d %d", &l, &r);
        a[i] = make_tuple(l, r, i);
    }
    sort(a.begin(), a.end(), cmp);

    vector<int> contained(n, 0);
    int maxR = get<1>(a[0]);
    for(int i=1;i<n;i++){
        if(get<1>(a[i]) <= maxR){
            contained[get<2>(a[i])] = 1;
        }
        maxR = max(maxR, get<1>(a[i]));
    }

    vector<int> contains(n, 0);
    int minR = get<1>(a[n-1]);
    for(int i=n-2;i>=0;i--){
        if(get<1>(a[i]) >= minR){
            contains[get<2>(a[i])] = 1;
        }
        minR = min(minR, get<1>(a[i]));
    }

    for (int i=0;i<n;i++) printf("%d ", contains[i]);
    printf("\n");
    for (int i=0;i<n;i++) printf("%d ", contained[i]);   
}
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int main(){
    //clock_t tStart = clock();

    int n;
    scanf("%d", &n);
    vector<pair<pair<int,int>, int> > a(n);
    for(int i=0;i<n;i++){
        scanf("%d %d", &a[i].first.first, &a[i].first.second);
        a[i].second = i;
    }

    sort(a.begin(), a.end());
    // for(auto x: a) printf("%d %d %d\n", x.first.first, x.first.second, x.second);
    
    vector<int> ans(n);
    priority_queue<pair<int,int>> pq;

    int rooms = 0, last = 0;
    for(int i=0; i<n; i++){
        if(pq.empty()){
            last++;
            pq.push(make_pair(-a[i].first.second, last));
            ans[a[i].second] = last;
        }else{
            pair<int,int> top = pq.top();
            if(-top.first < a[i].first.first){
                pq.pop();
                pq.push(make_pair(-a[i].first.second, top.second));
                ans[a[i].second] = top.second;
            }else{
                last++;
                pq.push(make_pair(-a[i].first.second, last));
                ans[a[i].second] = last;
            }
        }
        rooms = max(rooms, (int)pq.size());
    }
    printf("%d\n", rooms);
    for(int i=0;i<n;i++) printf("%d ", ans[i]);
    printf("\n");
    //printf("Time taken: %fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}
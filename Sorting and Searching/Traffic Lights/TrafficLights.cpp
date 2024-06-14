#include<algorithm>
#include<iostream>
#include<set>
#include<map>
#include<vector>

using std::cout;
using std::endl;
using std::vector;
using std::cerr;

int main(){
    int x,p,n;
    scanf("%d %d",&x,&n);
    std::set<int> s;
    s.insert(0);
    s.insert(x);
    std::map <int, int> freq;
    freq[x] = 1;
    for(int i=0;i<n;i++){
        scanf("%d",&p);
        auto it = s.upper_bound(p);
        auto prev = it;
        prev--;
        freq[*it - *prev]--;
        if(freq[*it - *prev] == 0) freq.erase(*it - *prev);
        freq[p-*prev]++;
        freq[*it-p]++;
        s.insert(it, p);
        printf("%d ", freq.rbegin()->first);
    }
    printf("\n");
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}
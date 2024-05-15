#include<bits/stdc++.h>
using namespace std;

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }
template <class T, size_t N>
void print_a(array<T, N> &a){for (auto x:a) cout<< x <<endl; }

/* UTILS */
#define MAXN 100005
#define BIGINT 1000000009

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}

bool cmp1(const pair<int, int> &a, const pair<int, int> &b) {
    return a.first > b.first;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

// #ifndef ONLINE_JUDGE  
//     freopen("in.txt", "r", stdin); 
//     freopen("error.txt", "w", stderr); 
//     freopen("out.txt", "w", stdout); 
// #endif

    int n,m;
    cin>>n>>m;

    multiset<int> prices;
    f(i,0,n) { 
        int x;
        cin>>x; 
        prices.insert(-x);
    }

    int maxp[m];
    f(i,0,m) cin>>maxp[i];

    f(i,0,m){
        int curr = maxp[i];
        auto lb = prices.lower_bound(-curr);
        if(lb == prices.end()) cout<<-1<<endl;
        else {
            cout<<-(*lb)<<endl;
            prices.erase(lb);
        }
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
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

/* UTILS */
#define MAXN 100005
#define BIGINT 1000000009

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

// #ifndef ONLINE_JUDGE  
//     freopen("in.txt", "r", stdin); 
//     freopen("error.txt", "w", stderr); 
//     freopen("out.txt", "w", stdout); 
// #endif
//    int tc;
//    cin>>tc;
//    while(tc--){
//        
//    }
    int n;
    cin>>n;
    vi v(n);
    f(i, 0, n){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    ll ans = 1;
    f(i, 0, n){
        if(v[i] > ans){
            break;
        }
        ans += v[i];
    }
    cout<<ans<<endl;

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
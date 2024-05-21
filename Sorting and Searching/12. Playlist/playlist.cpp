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
    vi k(n);
    f(i,0,n) cin>>k[i];
    set<int> temp;
    ll curr_len = 0;
    ll max_len = 0;
    f(i,0,n){
        if(temp.find(k[i]) == temp.end()){
            temp.insert(k[i]);
            curr_len++;
        }
        else{
            while(temp.find(k[i]) != temp.end()){
                temp.erase(k[i-curr_len]);
                curr_len--;
            }
            temp.insert(k[i]);
            curr_len++;
        }
        max_len = max(max_len, curr_len);
    }
    cout<<max_len<<endl;

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
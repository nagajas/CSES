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
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; cout << endl; }

/* UTILS */
#define MAXN 100005
#define BIGINT 1000000009
int cnt = 0;

void search_aux(int y, vector<int> &column, vector<int> &diag1, vector<int> &diag2) {
    if (y == 8) {
        cnt++;
        return; 
    }

    f(x, 0, 8) {
        if (column[x] || diag1[x+y] || diag2[x-y+8-1]) continue;
        column[x] = diag1[x+y] = diag2[x-y+8-1] = 1;
        search_aux(y+1, column, diag1, diag2);
        column[x] = diag1[x+y] = diag2[x-y+8-1] = 0;
    }
}

void search() {
    // int n = board.size();
    int n = 8;
    vector<int> column(n, 0), diag1(2*n-1, 0), diag2(2*n-1, 0);
    search_aux(0, column, diag1, diag2);
}

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
       
//    }
    // ll grid[][8] = {0};
    // f(i,0,8){
    //     f(j,0,8){
    //         char c;
    //         cin>>c;
    //         if(c == '*'){
    //             grid[i][j] = 1;
    //         }
    //     }
    // }
    search();
    cout<<cnt<<endl;

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
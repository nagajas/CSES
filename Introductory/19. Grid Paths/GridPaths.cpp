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
//template <class T>
//void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

/* UTILS */
#define MAXN 100005
#define BIGINT 1000000009

class GridPathSolver{
private:
    int paths;
    int steps;
    bool vis[7][7];
    string path;
    void pathgen(int r, int c){
        
        if(r==6 && c==0){
            if(steps==48) paths++;
            return;
        }
        if( ((r>0 && r<6) && (c==0 || c==6) && !vis[r-1][c] && !vis[r+1][c]) || 
            ((c>0 && c<6) && (r==0 || r==6) && !vis[r][c-1] && !vis[r][c+1]) ||
            ((c>0 && c<6) && (r>0 && r<6) && 
                ((vis[r-1][c] && vis[r+1][c] && !vis[r][c-1] && !vis[r][c+1]) ||
                (vis[r][c-1] && vis[r][c+1] && !vis[r-1][c] && !vis[r+1][c]))
            )) return;

        vis[r][c] = true;
        if (path[steps] != '?') {
            switch (path[steps]) {
                case 'D':
                    if (r < 6 && !vis[r + 1][c]) {
                        steps++;
                        pathgen(r + 1, c);
                        steps--;
                    }
                    break;
                case 'U':
                    if (r > 0 && !vis[r - 1][c]) {
                        steps++;
                        pathgen(r - 1, c);
                        steps--;
                    }
                    break;
                case 'R':
                    if (c < 6 && !vis[r][c + 1]) {
                        steps++;
                        pathgen(r, c + 1);
                        steps--;
                    }
                    break;
                case 'L':
                    if (c > 0 && !vis[r][c - 1]) {
                        steps++;
                        pathgen(r, c - 1);
                        steps--;
                    }
                    break;
            }
        } else {
            if (r > 0 && !vis[r - 1][c]) {
                steps++;
                pathgen(r - 1, c);
                steps--;
            }
            if (r < 6 && !vis[r + 1][c]) {
                steps++;
                pathgen(r + 1, c);
                steps--;
            }
            if (c > 0 && !vis[r][c - 1]) {
                steps++;
                pathgen(r, c - 1);
                steps--;
            }
            if (c < 6 && !vis[r][c + 1]) {
                steps++;
                pathgen(r, c + 1);
                steps--;
            }
        }
        vis[r][c] = false;
    }
public:
    int solve(string path){
        this->path = path;
        pathgen(0,0);
        return paths;
    }
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

// #ifndef ONLINE_JUDGE  
//     freopen("in.txt", "r", stdin); 
//     freopen("error.txt", "w", stderr); 
//     freopen("out.txt", "w", stdout); 
// #endif
    string inpath;
    cin>>inpath;
    cout<< GridPathSolver().solve(inpath) <<endl;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
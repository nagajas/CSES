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

int binSearch(int *a, int n, int t){
    int l=0,r=n-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(a[mid]==t){
            return mid;
        }
        else if(a[mid]>t){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

// #ifndef ONLINE_JUDGE  
//     freopen("in.txt", "r", stdin); 
//     freopen("error.txt", "w", stderr); 
//     freopen("out.txt", "w", stdout); 
// #endif

    int n,x;
    cin>>n>>x;
    int a[n], c[n];
    f(i,0,n) {
        cin>>a[i];
        c[i]=a[i];
    }
    sort(a,a+n);

    bool flag=false;

    f(i,0,n){
        int t = x - a[i];
        int BS = binSearch(a,n,t);
        if(BS!=-1 && BS!=i){
            int id=0, id1=0;
            rf(j,n,0){
                if (c[j]==a[i]) {
                    id=j+1;
                    break;
                }
            }
            rf(j,n,0) if (c[j]==a[BS] && id!=j-1) id1=j+1;

            cout<<id<<" "<<id1<<endl;
            flag=true;
            break;
        }
    }

    if(!flag) cout<<"IMPOSSIBLE"<<endl;

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
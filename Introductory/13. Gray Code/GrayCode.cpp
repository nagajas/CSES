#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100005
#define BIGINT 1000000009

void GreyCode(int n)
{
     // power of 2
    for (int i = 0; i < (1 << n); i++) 
    {
        int val = (i ^ (i >> 1));
        bitset<32> r(val);
         
        string s = r.to_string();
        cout << s.substr(32 - n) <<endl;
    }
}

int main(){
// #ifndef ONLINE_JUDGE  
//     freopen("in.txt", "r", stdin); 
//     freopen("error.txt", "w", stderr); 
//     freopen("out.txt", "w", stdout); 
// #endif

    int n;
    cin>>n;
    GreyCode(n);

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
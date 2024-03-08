#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100005
#define BIGINT 1000000009


void search(vector<ll> a,vector<int> subset,int k) {
    if (k == a.size()) {
        //Process the subsets here
        for(int i=0;i<subset.size();i++){
            //Use the subset as a[subset[i]]
            cout<<a[subset[i]]<<" ";
        }
        cout<<endl;
    } else {
        search(a,subset,k+1);
        subset.push_back(k);
        search(a,subset,k+1);
        subset.pop_back();
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

    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    search(a,{},0);   
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100005
#define BIGINT 1000000009


vector<pair<int,int>> Hanoi(int n){
    if(n==1){
        return {{1,3}};
    }
    else{
        vector<pair<int,int>> st;
        vector<pair<int,int>> Hn1 = Hanoi(n-1);

        st.insert(st.end(),Hn1.begin(),Hn1.end());
        st.push_back({1,3});
        st.insert(st.end(),Hn1.begin(),Hn1.end());

        int i,sz=(1<<(n-1))-1;

        for(i=0;i<sz;i++){
            if(Hn1[i].first==2) st[i].first = 3;
            if(Hn1[i].first==3) st[i].first = 2;
            if(Hn1[i].second==3) st[i].second = 2;
            if(Hn1[i].second==2) st[i].second = 3;
        }
        int ind = sz+1;
        for(i=0;i<sz;i++){
            if(Hn1[i].first==1) st[ind+i].first = 2;
            if(Hn1[i].first==2) st[ind+i].first = 1;
            if(Hn1[i].second==2) st[ind+i].second = 1;
            if(Hn1[i].second==1) st[ind+i].second = 2;
        }
        return st;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<(1<<n)-1<<endl;

    vector<pair<int,int>> H = Hanoi(n);
    for(auto x:H){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
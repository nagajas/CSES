#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100005
#define BIGINT 1000000009

int main(){
// #ifndef ONLINE_JUDGE  
//     freopen("in.txt", "r", stdin); 
//     freopen("error.txt", "w", stderr); 
//     freopen("out.txt", "w", stdout); 
// #endif

    string s;
    cin>>s;

    map<char,int> dict;

    for(int i=0; i < s.length();i++){
        if(dict[char(s[i])]) dict[char(s[i])]+=1;
        else dict[char(s[i])]=1;
    }
    int flag=0;

    for(const auto& pair : dict){
        if(pair.second %2) flag+= 1;
    }
    
    if(flag>1){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        string t = "";
        string middle = "";
        for(const auto& pair : dict){
            char key = pair.first;
            int val = pair.second;
            if(val%2==0){
                for(int j=0; j<val/2;j++){
                    t+=key;
                }
            }
            else{
                for(int j=0;j<val;j++){
                    middle+=key;
                }
            }
        }
        string rev = string(t.rbegin(), t.rend());
        cout<<t<<middle<<rev<<endl;
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
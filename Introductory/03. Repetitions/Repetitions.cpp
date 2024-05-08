#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin >> s;
    int l=0,r=0;
    int ans=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            r++;
        }
        else{
            l=i;
            r=i;
        }
        ans = max(r-l+1,ans);
    }
    cout<<ans<<endl;

}
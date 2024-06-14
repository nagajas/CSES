#include<cstdio>
#include<algorithm>
#include<stack>
#include<vector>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    stack<int> s;
    for(int i = 0; i < n; i++){
        while(!s.empty() && a[s.top()] >= a[i]){
            s.pop();
        }
        if(s.empty()){
            printf("0 ");
        }else{
            printf("%d ", s.top() + 1);
        }
        s.push(i);
    }
    printf("\n");
    fprintf(stderr, "Time: %fs\n", clock()/float(CLOCKS_PER_SEC));
    return 0;
}
#include<cstdio>
#include<queue>

int main(){
    int n;
    scanf("%d",&n);
    std::queue<int> q;
    for(int i=1;i<=n;i++) q.push(i);
    while(q.size()>1){
        q.push(q.front());
        q.pop();
        printf("%d ",q.front());
        q.pop();
    }
    printf("%d\n",q.front());

    //printf("time taken : %f secs\n", (float)clock() / CLOCKS_PER_SEC);
    return 0;
}
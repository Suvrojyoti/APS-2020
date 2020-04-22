#include <stdio.h>
#include <vector>
using namespace std;

vector<int> way[5005];
int vs[5005];
int need[5005];

void dfs(int x){
    if(vs[x]) return;
    vs[x] = 1;
    need[x] = 0;
    for(int v : way[x]) dfs(v);
    return;
}

int main(){
    int n, m, s;
    scanf("%d%d%d", &n, &m, &s);
    for(int i=0; i<m; i++){
        int u, v;
        scanf("%d%d", &u, &v);
        way[u].push_back(v);
    }
    for(int i=1; i<=n; i++) need[i] = 1;
    dfs(s);
    for(int i=1; i<=n; i++){
        if(!need[i]) continue;
        for(int j=1; j<=n; j++) vs[j] = 0;
        dfs(i);
        need[i] = 1;
    }
    int res = 0;
    for(int i=1; i<=n; i++) res += need[i];
    printf("%d", res);
    return 0;
}
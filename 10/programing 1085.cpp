#include <bits/stdc++.h>
using namespace std;
int x[500001];
int check[500001];
map<int,vector<int>> use;
int n,m,k,z,zz,maxx;
void dfs(int node){
    maxx=max(maxx,node);
    if(maxx>=n) return;
    if(x[node]==1){
        for(int i=0;i<use[node].size();i++){
            dfs(use[node][i]);
        }
    }
    if(x[node]==0){
        dfs(node+1);
    }
}
main(){
    cin >> n >> m >> k;
    for(int i=0;i<m;i++){
        scanf("%d %d",&z,&zz);
        x[z]=1;
        use[z].push_back(zz);
    }
    for(int i=0;i<k;i++){
        scanf("%d",&z);
        if(x[z]==0) x[z]=-1;
    }
    dfs(1);
    if(maxx>=n){
        cout << "1";
    }else{
        cout << "0 " << maxx;
    }
}

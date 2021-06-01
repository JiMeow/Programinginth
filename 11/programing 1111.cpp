#include <bits/stdc++.h>
using namespace std;
vector<int> x[100002];
int visit[100002];
int disa[100002];
map<pair<int,int>,int> ans;
int anss=0;
void bfs(int node){
    visit[node]=1;
    queue<int> use;
    use.push(node);
    while(use.size()!=0){
        node=use.front();
        visit[node]=1;
        for(int i=0;i<x[node].size();i++){
            if(visit[x[node][i]]==0){
                use.push(x[node][i]);
                disa[x[node][i]]=max(disa[node]+ans[{x[node][i],node}],disa[x[node][i]]);
                anss=max(disa[x[node][i]],anss);
            }
        }
        use.pop();
    }
}

main(){
    int n,k1,k2,dis;
    cin >> n;
    for(int i=0;i<n-1;i++){
        cin >> k1 >> k2 >> dis;
        ans[{k1,k2}]=dis;
        ans[{k2,k1}]=dis;
        x[k1].push_back(k2);
        x[k2].push_back(k1);
    }
    bfs(1);
    cout << anss;
}

#include <bits/stdc++.h>
using namespace std;
vector<int> a[100001];
int dis[100001];
int visit[100001]; //no idea
map<pair<int,int>,int> x;
void bfs(int node){
    deque<int> z;
    visit[node]=1;
    z.push_back(node);
    while(z.size()!=0){
        node=z.front();
        visit[node]=1;
        for(int i=0;i<a[node].size();i++){
            if(visit[a[node][i]]==0)
            {
                z.push_back(a[node][i]);
                dis[a[node][i]]=min(dis[a[node][i]],dis[node]+x[{node,a[node][i]}]);
            }
        }
        z.pop_front();
    }
}

main(){
    fill(dis,dis+100001,1e9);
    dis[1]=0;
    int n,m,k,kk,kkk;
    cin >> n >> m ;
    for(int i=0;i<m;i++){
        cin >> k >> kk >> kkk;
        x[{kk,k}]=kkk;
        x[{k,kk}]=kkk;
        a[k].push_back(kk);
        a[kk].push_back(k);
    }
    bfs(1);
    cout << dis[n];
}

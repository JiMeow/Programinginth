#include<bits/stdc++.h>
using namespace std;
int visit[20000];
int mink[20000];
vector<int> a[20000];
int k,ans;
void bfs(int node){
    queue<int> A;
    A.push(node);
    mink[node] = 0;
    while(!A.empty()){
        node=A.front();
        A.pop();
        visit[node]=1;
        for(int i=0;i<a[node].size();i++){
            if(visit[a[node][i]]==0){
                mink[a[node][i]]=min(mink[a[node][i]],mink[node]+1);
                A.push(a[node][i]);
            visit[a[node][i]]=1;
            }
        }
    }
}

main(){
    fill(mink,mink+20000,1e9);
    int n,l;
    int x,y;
    cin >> k >> l >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        a[x].push_back(y);
    }
    bfs(1);
    for(int i=l;i>=0;i--){
        if(mink[i]<=k){
            cout << i;
            break;
        }
    }
}

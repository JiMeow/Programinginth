#include <bits/stdc++.h>
using namespace std;
vector<int> x[300001];
int visit[300001];
int ans=0;
void dfs(int node,int diss){
    ans=max(ans,diss);
    visit[node]=max(visit[node],diss);
    for(int i=0;i<x[node].size();i++){
        if(visit[x[node][i]]<diss+1){
            dfs(x[node][i],diss+1);
        }
    }
}

main(){
    int n,k1,k2;
    cin >> n;
    for(int i=0;i<n-1;i++){
        cin >> k1 >> k2;
        if(k1>k2){
            int temp=k1;
            k1=k2;
            k2=temp;
        }
        x[k1].push_back(k2);
    }
    for(int i=1;i<=n;i++){
        dfs(i,1);
    }
    cout << ans;
}

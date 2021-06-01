#include <bits/stdc++.h>
using namespace std;
vector<int> a[1001];
int visit[1001];
void bfs(int node){
    queue<int> use;
    use.push(node);
    visit[node]++;
    while(use.size()!=0){
        node=use.front();
        for(int i=0;i<a[node].size();i++){
            if(visit[a[node][i]]<=1){
                use.push(a[node][i]);
                visit[a[node][i]]++;
            }
        }
       // if(use.size()!=0){
        use.pop();
        //}
    }
}

main(){
    int n,x,y;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> x;
        if(x==0){
            //a[i].push_back(0);
        }
        else{
        for(int j=0;j<x;j++){
            cin >> y;
            a[i].push_back(y);
        }
        }
    }
    for(int i=1;i<=n;i++){
        int print=0;
        fill(visit,visit+1001,0);
        for(int j=0;j<a[i].size();j++){
            bfs(a[i][j]);
        }
        for(int j=0;j<1001;j++){
            if(visit[j]>1){
                print++;
            }
        }
        if(print>0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

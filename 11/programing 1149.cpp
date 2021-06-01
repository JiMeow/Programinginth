#include<bits/stdc++.h>
using namespace std;
int x[1000][1000];
int visit[1000][1000];
int n;
int mapp[1000][1000];
vector<pair<int,int>> use;

void bfs(int xx,int yy){
    visit[xx][yy]=1;
    queue<pair<int,int>> z;
    z.emplace(xx,yy);
    while(z.size()!=0){
        xx=z.front().first;
        yy=z.front().second;
        visit[xx][yy]=1;
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << mapp[i][j] << " ";
        }
        cout << endl;
        }
        if(xx==use[1].first && yy==use[1].second){
            z.pop();
        }
        else{
        if(visit[xx-1][yy]==0 && xx-1>=0){
            z.emplace(xx-1,yy);
            if(mapp[xx-1][yy]==0){
                mapp[xx-1][yy]=max(mapp[xx][yy],x[xx-1][yy]);
            }else{
                mapp[xx-1][yy]=min(mapp[xx][yy],mapp[xx-1][yy]);
                mapp[xx-1][yy]=max(mapp[xx-1][yy],x[xx-1][yy]);
            }
        }
        if(visit[xx+1][yy]==0 && xx+1<n){
            z.emplace(xx+1,yy);
            if(mapp[xx+1][yy]==0){
                mapp[xx+1][yy]=max(mapp[xx][yy],x[xx+1][yy]);
            }else{
                mapp[xx+1][yy]=min(mapp[xx][yy],mapp[xx+1][yy]);
                mapp[xx+1][yy]=max(mapp[xx+1][yy],x[xx+1][yy]);
            }
        }
        if(visit[xx][yy-1]==0 && yy-1>=0){
            z.emplace(xx,yy-1);
            if(mapp[xx][yy-1]==0){
                mapp[xx][yy-1]=max(mapp[xx][yy],x[xx][yy-1]);
            }else{
                mapp[xx][yy-1]=min(mapp[xx][yy],mapp[xx][yy-1]);
                mapp[xx][yy-1]=max(mapp[xx][yy-1],x[xx][yy-1]);
            }
        }
        if(visit[xx][yy+1]==0 && yy+1<n){
            z.emplace(xx,yy+1);
            if(mapp[xx][yy+1]==0){
                mapp[xx][yy+1]=max(mapp[xx][yy],x[xx][yy+1]);
            }else{
                mapp[xx][yy+1]=min(mapp[xx][yy],mapp[xx][yy+1]);
                mapp[xx][yy+1]=max(mapp[xx][yy+1],x[xx][yy+1]);
            }
        }
        z.pop();
        }
    }
}

main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> x[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(x[i][j]==0){
                use.emplace_back(i,j);
            }
        }
    }
    bfs(use[0].first,use[0].second);
    cout << mapp[use[1].first][use[1].second] << endl;
}

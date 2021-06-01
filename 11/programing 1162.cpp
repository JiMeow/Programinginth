#include<bits/stdc++.h>
using namespace std;
int x[1000][1000];
int n,m,t,num;
vector<int> mapp;

void dfs(int xx,int yy,int ll){
    if(xx==t-ll){
        if(mapp.size()!=0){
            if(mapp[ll-1]==yy){
                mapp.push_back(yy);
                return ;
            }
            else if(mapp[ll-1]==yy+1){
                mapp.push_back(yy);
                return ;
            }
            else if(mapp[ll-1]==yy-1){
                mapp.push_back(yy);
                return ;
            }
        }
        else {mapp.push_back(yy); return;}
    }
    if(x[xx+1][yy-1]==0 && xx+1<=t-ll && yy-1>=1){
        dfs(xx+1,yy-1,ll);
    }
    if(x[xx+1][yy]==0 && xx+1<=t-ll){
        dfs(xx+1,yy,ll);
    }
    if(x[xx+1][yy+1]==0 && xx+1<=t-ll && yy+1<=m){
        dfs(xx+1,yy+1,ll);
    }
}
main(){
    cin >> m >> n >> t;
    for(int i=1;i<=t;i++){
        for(int j=1;j<=m;j++){
            cin >> x[i][j];
        }
    }
    for(int i=1;i<=t;i++){
        dfs(0,n,i-1);
    }
    mapp.push_back(n);
    for(int i=mapp.size()-1;i>=1;i--){
        if(mapp[i]-mapp[i-1]==1){
            cout << "1\n";
        }
        if(mapp[i]-mapp[i-1]==0){
            cout << "3\n";
        }
        if(mapp[i]-mapp[i-1]==-1){
            cout << "2\n";
        }
    }
}

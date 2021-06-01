#include<bits/stdc++.h>
using namespace std;
char k[1000][1000];
int visit[1000][1000];
int dis[1000][1000];
queue<pair<int,int> > q,p;
int a,b;

void flood(){
    queue<pair<int,int> > qq=q;
    while(qq.size()!=0){
    int xx=qq.front().first;
    int yy=qq.front().second;
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if(abs(i+j)==1 && k[xx+i][yy+j]!='X' && k[xx+i][yy+j]!='D' && visit[xx+i][yy+j]==0 && xx+i>=0 && xx+i<a && yy+j>=0 && yy+j<b){
                k[xx+i][yy+j]='*';
                visit[xx+i][yy+j]=1;
                q.emplace(xx+i,yy+j);
            }
        }
    }
    qq.pop();
    q.pop();
    }
}

void go(){
    queue<pair<int,int> > pp=p;
    while(pp.size()!=0){
    int xx=pp.front().first;
    int yy=pp.front().second;
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                if(abs(i+j)==1 && (k[xx+i][yy+j]=='.' || k[xx+i][yy+j]=='D') && visit[xx+i][yy+j]==0 && xx+i >=0&& xx+i <a && yy+j>=0&& yy+j<b){
                    p.emplace(xx+i,yy+j);
                    visit[xx+i][yy+j]=1;
                    dis[xx+i][yy+j]=dis[xx][yy]+1;
                }
            }
        }
        pp.pop();
        p.pop();
    }
}

main(){
    pair<int,int> d,s,e;
    scanf("%d%d",&a,&b);
    for(int i=0;i<a;i++){
        scanf("%s",k[i]);
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if('*'==k[i][j]){
                q.emplace(i,j);
                visit[i][j]=1;
            }
            if('D'==k[i][j]){
                e.first=i;
                e.second=j;
            }
            if('S'==k[i][j]){
                p.emplace(i,j);
                visit[i][j]=1;
            }
        }
    }
    int countt=0;
    while(p.size()!=0){
        flood();
        go();
    }
    if(dis[e.first][e.second]==0){
        printf("KAKTUS");
    }else
    printf("%d",dis[e.first][e.second]);
}
/*
3 3
D.*
...
.S.
*/

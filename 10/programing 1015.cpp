#include<bits/stdc++.h>
using namespace std;
int x,num=0;
int a[20][20];
int visit[20][20];
void ff(int xx,int yy);

void check(int i,int j){
            int countt=0;
            if(visit[i][j]==0){
            ff(i,j);
            for(int ii=1;ii<=x;ii++){
                for(int jj=1;jj<=x;jj++){
                    if(visit[ii][jj]==1) {countt++;}
                }
            }
            if(countt==3){
            for(int ii=1;ii<=x;ii++){
                for(int jj=1;jj<=x;jj++){
                    if(visit[ii][jj]==1 && visit[ii][jj+1]==1 && visit[ii+1][jj]==1){
                        visit[ii][jj]=2;
                        visit[ii][jj+1]=2;
                        visit[ii+1][jj]=2;
                        num++;
                    }
                    if(visit[ii][jj]==1 && visit[ii+1][jj-1]==1 && visit[ii+1][jj]==1){
                        visit[ii][jj]=2;
                        visit[ii+1][jj]=2;
                        visit[ii+1][jj-1]=2;
                        num++;
                    }
                    if(visit[ii][jj]==1 && visit[ii][jj+1]==1 && visit[ii+1][jj+1]==1){
                        visit[ii][jj]=2;
                        visit[ii+1][jj+1]=2;
                        visit[ii][jj+1]=2;
                        num++;
                    }
                    if(visit[ii][jj]==1 && visit[ii+1][jj]==1 && visit[ii+1][jj+1]==1){
                        visit[ii+1][jj]=2;
                        visit[ii][jj]=2;
                        visit[ii+1][jj+1]=2;
                        num++;
                    }
                }
            }
        }
            for(int ii=1;ii<=x;ii++){
                for(int jj=1;jj<=x;jj++){
                    if(visit[ii][jj]==1) {visit[ii][jj]=2;}
                }
            }
        }
}
void ff(int xx,int yy){
    visit[xx][yy]=1;
    if(a[xx][yy]==a[xx+1][yy] && visit[xx+1][yy]==0){
        ff(xx+1,yy);
    }
    if(a[xx][yy]==a[xx-1][yy]&& visit[xx-1][yy]==0){
        ff(xx-1,yy);
    }
    if(a[xx][yy]==a[xx][yy+1]&& visit[xx][yy+1]==0){
        ff(xx,yy+1);
    }
    if(a[xx][yy]==a[xx][yy-1]&& visit[xx][yy-1]==0){
        ff(xx,yy-1);
    }
}
main(){
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            a[i][j]=-5;
        }
    }
    cin >> x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1 ;i<=x;i++){
        for(int j=1;j<=x;j++){
            check(i,j);
        }
    }
    cout << num;
}

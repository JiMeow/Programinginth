#include <bits/stdc++.h>
using namespace std;
int visit[200][200];
int a[200][200];
int dis[200][200];
int use1,use2,m,n;
int timee=1;
void floodfill(int y,int x){
    visit[y][x]=timee;
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if(abs(i-j)==1){
                if(a[y+i][x+j]==1 && visit[y+i][x+j]==0 && y+i<m && x+j<n && y+i>=0 && x+j>=0){
                    floodfill(y+i,x+j);
                }
            }
        }
    }
}

void flood(int y,int x){
    if(a[y+1][x]==1 && y+1<m){
        dis[y+1][x]=min(dis[y+1][x],dis[y][x]+1);
    }
    if(a[y-1][x]==1&& y-1>=0){
        dis[y-1][x]=min(dis[y-1][x],dis[y][x]+1);
    }
    if(a[y][x+1]==1&& x+1<n){
        dis[y][x+1]=min(dis[y][x+1],dis[y][x]+1);
    }
    if(a[y][x-1]==1&& x-1>=0){
        dis[y][x-1]=min(dis[y][x-1],dis[y][x]+1);
    }
}

bool check(int y,int x){
    use1=0;
    use2=0;
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if(abs(i-j)==1){
                if(visit[y+i][x+j]==1 && y+i<m && x+j<n && y+i>=0 && x+j>=0){
                    use1++;
                }
                if(visit[y+i][x+j]==2&& y+i<m && x+j<n && y+i>=0 && x+j>=0){
                    use2++;
                }
            }
        }
    }
    if(use1>0 && use2>0){
        return 1;
    }else{
        return 0;
    }
}

main(){
    int startx,starty,endx,endy,countt=0;
    cin >> m >> n >> starty >> startx >> endy >> endx;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            dis[i][j]=1000;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    visit[starty-1][startx-1]=timee;
    floodfill(starty-1,startx-1);
    timee++;
    visit[endy-1][endx-1]=timee;
    floodfill(endy-1,endx-1);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==0 && check(i,j)){
                a[i][j]=1;
                countt++;
            }
        }
    }
    cout << countt <<endl;
    dis[endy-1][endx-1]=1;
    for(int i=1;i<500;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                if(dis[j][k]==i){
                    flood(j,k);
                }
            }
        }
    }
    cout << dis[starty-1][startx-1];
}

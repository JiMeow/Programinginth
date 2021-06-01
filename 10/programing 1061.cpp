#include <bits/stdc++.h>
using namespace std;
int x[20][20];
int ans=-5;
int n,usex,usey;
int visit[20][20];
void ff(int xx,int y){
    ans=max(ans,x[xx][y]);
    visit[xx][y]=1;
    if(visit[xx+1][y]==0 && x[xx+1][y]!=100 && xx+1<n && x[xx+1][y]>x[xx][y]){
        ff(xx+1,y);
    }
    if(visit[xx-1][y]==0 && x[xx-1][y]!=100 && xx-1>=0 && x[xx-1][y]>x[xx][y]){
        ff(xx-1,y);
    }
    if(visit[xx][y+1]==0 && x[xx][y+1]!=100 && y+1<n && x[xx][y+1]>x[xx][y]){
        ff(xx,y+1);
    }
    if(visit[xx][y-1]==0 && x[xx][y-1]!=100 && y-1>=0 && x[xx][y-1]>x[xx][y]){
        ff(xx,y-1);
    }
}

main(){
    cin >> n >> usex >> usey;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> x[i][j];
        }
    }
    ff(usey-1,usex-1);
    cout << ans;
}

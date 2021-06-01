
#include <bits/stdc++.h>
using namespace std;
int visit[100][100];
int x[100][100];
int n,m,k;
string ans;
int ff(int s,int d){
    visit[s][d]=1;
    if(x[s][d]==1){
        if(s==0){
            ans="N";
            return 0;
        }
        else if(visit[s-1][d]==0){
            ff(s-1,d);
        }
        else{
            ans="NO";
            return 0;
        }
    }
    if(x[s][d]==2){
        if(d+1==n){
            ans="E";
            return 0;
        }
        else if(visit[s][d+1]==0){
            ff(s,d+1);
        }
        else{
            ans="NO";
            return 0;
        }
    }
    if(x[s][d]==3){
        if(s+1==m){
            ans="S";
            return 0;
        }
        else if(visit[s+1][d]==0){
            ff(s+1,d);
        }
        else{
            ans="NO";
            return 0;
        }
    }
    if(x[s][d]==4){
        if(d==0){
            ans="W";
            return 0;
        }
        else if(visit[s][d-1]==0){
            ff(s,d-1);
        }
        else{
            ans="NO";
            return 0;
        }
    }
}
main(){
    cin >> n >> m >> k ;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> x[i][j];
        }
    }
    int xx,yy;
    for(int i=0;i<k;i++){
        cin >> xx >> yy;
        ff(yy-1,xx-1);
        cout << ans << endl;
        for(int j=0;j<100;j++){
            for(int k=0;k<100;k++){
                visit[j][k]=0;
            }
        }
    }
}

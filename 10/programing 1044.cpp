#include <bits/stdc++.h>
using namespace std;
int test[1000][1000];
int a[1000][1000];
int m,n;
int usex(int y,int x){
    int all=0;
    for(int i=0;i<n;i++){
        if(y+1>=0 && y+1<m){
            all += test[y+1][i];
        }
        if(y-1>=0 && y-1<m){
            all += test[y-1][i];
        }
        all -= a[y][i];
    }
    return all;
}
int usey(int y,int x){
    int all=0;
    for(int i=0;i<m;i++){
        if(x+1>=0 && x+1<n){
            all += test[i][x+1];
        }
        if(x-1>=0 && x-1<n){
            all += test[i][x-1];
        }
        all -= a[i][x];
    }
    return all;
}
main(){
    int ans=0;
    cin >> m >> n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
            ans+=a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> test[i][j];
        }
    }
    int maxx=-10000000;
    for(int i=0;i<m;i++){
            int k=usex(i,0);
        if(k>maxx){
            maxx=k;
        //    cout << maxx << " " << i << " 0 ";
        }
    }
    for(int i=0;i<n;i++){
            int k=usey(0,i);
        if(k>maxx){
            maxx=k;
          //  cout << maxx << " 0 " << i << " ";
        }
    }
    cout << ans+maxx;
}

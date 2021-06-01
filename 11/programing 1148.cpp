#include<bits/stdc++.h>
using namespace std;
int n,m,k;
vector<int> l(20010),val(20010),xx(20010);
int dp[1800][1800];

int go(int x,int y){
    if(dp[x][y]!=0) return dp[x][y];
    if(y==0) return val[0]*xx[x];
    if(x<y) return -1e9;
    return dp[x][y]=max(go(x-1,y)+l[x]*val[y],go(x-1,y-1)+l[x]*val[y]);
}

main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x;
    cin >> n >> m >> k;
    cin >> l[0];
    xx[0]=l[0];
    for(int i=0;i<m-1;i++){
        cin >> xx[i+1];
        l[i+1]=xx[i+1]-xx[i];
    }
    l[m]=n-xx[m-1];
    for(int i=0;i<k;i++){
        cin >> val[i];
    }
    cout << go(m,k-1);
}

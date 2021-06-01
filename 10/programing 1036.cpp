#include<bits/stdc++.h>
using namespace std;
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n >> k;
    int dp[1<<k];
    fill(dp,dp+(1<<k),1e9);
    for(int i=0;i<n;i++){
        int w;
        cin >> w;
        int cnt=0;
        for(int j=k-1;j>=0;j--){
            int x;
            cin >> x;
            cnt += x<<j;
        }
        dp[cnt]=min(dp[cnt],w);
    }
    for(int i=1;i<1<<k;i++){
        for(int j=0;j<i;j++){
            if(dp[i]!=1e9 && dp[j]!=1e9){
                dp[i|j]=min(dp[i]+dp[j],dp[i|j]);
            }
        }
    }
    cout << dp[(1<<k)-1];
}

#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[10],b[10],c[10],ab[100],ac[100],bc[100],abc[1000];
main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string x;
        cin >> x;
        a[x[0]-48]++;
        b[x[1]-48]++;
        c[x[2]-48]++;
        ab[10*(x[0]-48)+x[1]-48]++;
        ac[10*(x[0]-48)+x[2]-48]++;
        bc[10*(x[1]-48)+x[2]-48]++;
        abc[100*(x[0]-48)+10*(x[1]-48)+x[2]-48]++;
    }
    int ans=0;
    for(int i=0;i<10;i++){
        ans += (a[i]*(a[i]-1))/2;
        ans += (b[i]*(b[i]-1))/2;
        ans += (c[i]*(c[i]-1))/2;
    }
    for(int i=0;i<100;i++){
        ans -= (ab[i]*(ab[i]-1))/2;
        ans -= (bc[i]*(bc[i]-1))/2;
        ans -= (ac[i]*(ac[i]-1))/2;
    }
    for(int i=0;i<1000;i++){
        ans += (abc[i]*(abc[i]-1))/2;
    }
    cout << ans;
}

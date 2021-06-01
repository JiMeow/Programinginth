#include <bits/stdc++.h>
using namespace std;
int visit[502][502];
main(){
    //separate to 2 group then sort then find energy;
    unsigned long long int n,ans=0;
    cin >> n;
    vector<int> a,b,c,d;
    int x[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> x[i][j];
        }
    }
    for(int i=0;i<n;i+=2){
        for(int j=0;j<n;j+=2){
            visit[i][j]=1;
        }
    }
    for(int i=0;i<n;i+=2){
        for(int j=1;j<n;j+=2){
            visit[i][j]=2;
        }
    }
    for(int i=1;i<n;i+=2){
        for(int j=0;j<n;j+=2){
            visit[i][j]=3;
        }
    }
    for(int i=1;i<n;i+=2){
        for(int j=1;j<n;j+=2){
            visit[i][j]=4;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(visit[i][j]==1){
                a.push_back(x[i][j]);
            }
            if(visit[i][j]==2){
                b.push_back(x[i][j]);
            }
            if(visit[i][j]==3){
                c.push_back(x[i][j]);
            }
            if(visit[i][j]==4){
                d.push_back(x[i][j]);
            }
        }
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());

    for(int i=0;i<a.size();i++){
        ans += a[i]*b[i]*c[i]*d[i];
    }
    cout << ans;
}

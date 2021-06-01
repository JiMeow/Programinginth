#include<bits/stdc++.h>
using namespace std;

class A{
public: //from
    int left,right,top,down;
};
char x[1010][1010];
A v[1010][1010];

int n,m,t;

main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> x[i][j];
            }
        }
        for(int i=0;i<n;i++){
            int ans=0;
            for(int j=0;j<m;j++){
                if(x[i][j]=='1'){
                    ans++;
                }
                else{
                    ans=0;
                }
                    v[i][j].left=ans;
            }
            ans=0;
            for(int j=m-1;j>=0;j--){
                if(x[i][j]=='1'){
                    ans++;
                }
                else{
                    ans=0;
                }
                    v[i][j].right=ans;
            }
        }
        for(int j=0;j<m;j++){
            int ans=0;
            for(int i=0;i<n;i++){
                if(x[i][j]=='1'){
                    ans++;
                }
                else{
                    ans=0;
                }
                    v[i][j].top=ans;
            }
            ans=0;
            for(int i=n-1;i>=0;i--){
                if(x[i][j]=='1'){
                    ans++;
                }
                else{
                    ans=0;
                }
                v[i][j].down=ans;
            }
        }
        int maxx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(x[i][j]==1);
                maxx=max(maxx,v[i][j].top+v[i][j].right-1);
                maxx=max(maxx,v[i][j].down+v[i][j].left-1);
                maxx=max(maxx,v[i][j].top+v[i][j].left-1);
                maxx=max(maxx,v[i][j].down+v[i][j].right-1);
            }
        }
        cout << maxx << endl;

    }
}

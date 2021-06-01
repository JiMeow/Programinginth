#include <bits/stdc++.h>
using namespace std;
vector<int> x[20];//question;
int lie[21];
main(){
    int n,m,k;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> k;
            x[j].push_back(k);
        }
    }
    int anss=21;
    for(int i=0;i<pow(2,m);i++){
        bitset<20> a(i);
        //1=lie;
        //0=true;
        int ans=0;
        for(int j=0;j<20;j++){
            for(int k=0;k<x[j].size();k++){
                if(a[j]==1){
                    if(x[j][k]==-1){
                        lie[k]=1;
                    }
                }
                if(a[j]==0){
                    if(x[j][k]==1){
                        lie[k]=1;
                    }
                }
            }
        }
        for(int l=0;l<=20;l++){
            if(lie[l]==1){
                ans++;
            }
            lie[l]=0;
        }

        anss=min(anss,ans);
    }
    cout << anss;
}

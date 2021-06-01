#include <bits/stdc++.h>
using namespace std;
char x[64][64];
int num=0;
int lest=70;
int visit[70][70];
vector <pair<int,int>> anss;
int check(int m,int n){
    int l=1;
    int error=0;
    while(1){
        for(int i=m;i<m+l;i++){
            for(int j=n;j<n+l;j++){
                if(x[i][j]!='P' && x[i][j]!='S'){
                    return l-1;
                }
            }
        }
        l++;
    }
}

void ff(int d,int f){
    visit[d][f]=1;
    if(visit[d+1][f]==0 && x[d+1][f]=='P'){
        ff(d+1,f);
    }
    if(visit[d-1][f]==0 && x[d-1][f]=='P'){
        ff(d-1,f);
    }
    if(visit[d][f+1]==0 && x[d][f+1]=='P'){
        ff(d,f+1);
    }
    if(visit[d][f-1]==0 && x[d][f-1]=='P'){
        ff(d,f-1);
    }
}

main(){
    int yy,xx,big=0;
    cin >> xx >> yy;
    for(int i=0;i<yy;i++){
        for(int j=0;j<xx;j++){
            cin >> x[i][j];
        }
    }
    for(int i=0;i<yy;i++){
        for(int j=0;j<xx;j++){
            big=max(big,check(i,j));
        }
    }
    cout << big*big << " ";
    for(int i=0;i<yy;i++){
        for(int j=0;j<xx;j++){
                int countt=0;
            for(int ii=i;ii<i+big;ii++){
                for(int jj=j;jj<j+big;jj++){
                    if(x[ii][jj]=='T' || x[ii][jj]==0){
                        countt++;
                    }
                }
            }
            if(countt==0){
                anss.push_back({i,j});
            }
        }
    }
    for(int i=0;i<anss.size();i++){
        //cout << ":"<< anss[i].first << " " << anss[i].second << "\\";
        int ah=0;
        for(int j=anss[i].first;j<anss[i].first+big;j++){
            for(int k=anss[i].second;k<anss[i].second+big;k++){
                if(visit[j][k]==0 && x[j][k]=='P'){
                    ah++;
                    ff(j,k);
                }
            }
        }
        for(int j=0;j<64;j++){
            for(int k=0;k<64;k++){
                visit[j][k]=0;
            }
        }
        lest=min(lest,ah);
    }
    cout << lest;
}

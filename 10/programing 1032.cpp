#include <bits/stdc++.h>
using namespace std;
int po[9][9];
int visit[9][9];
int x[9][9];
int countt;
int all[10];
void checkx(int n){
    for(int i=0;i<9;i++){
        if(all[x[n][i]]==1){
            countt++;
            break;
        }
        all[x[n][i]]++;
    }
    fill(all,all+10,0);
}

void checky(int n){
    for(int i=0;i<9;i++){
        if(all[x[i][n]]==1){
            countt++;
            break;
        }
        all[x[i][n]]++;
    }
    fill(all,all+10,0);
}

main(){
    int n;
    cin >> n;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> po[i][j];
        }
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(po[i][j]!=0){
                visit[i][j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        countt=0;
        for(int j=0;j<9;j++){
            for(int k=0;k<9;k++){
                cin >> x[j][k];
            }
        }
        for(int j=0;j<9;j++){
            checkx(j);
            checky(j);
        }
        for(int j=0;j<9;j++){
            for(int k=0;k<9;k++){
                if(visit[j][k]==1){
                    if(x[j][k]!=po[j][k]){
                        countt++;
                        if(countt>0){
                            break;
                        }
                    }
                }
            }
            if(countt>0){
                break;
            }
        }
        if(countt==0)
        {
            cout << i+1 << endl;
        }
    }
    cout << "END";
}

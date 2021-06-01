#include <bits/stdc++.h>
using namespace std;
char x[12][100];
int have[100];
void gainx(int a){
    int l=11;
    int use=0;
    while(1){
        if(x[l][a]=='v'){
            break;
        }
        if(x[l][a]!=0){
            use++;
        }
        if(use==have[a]){
            break;
        }
        x[l][a]='X';
        if(l>=1){
            l--;
        }else{
            break;
        }
    }
}
main(){
    int n,start,h,usej=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> start >> h;
        usej=max(usej,h);
        for(int j=start;j<start+h+h;j++){
            have[j]++;
        }
        for(int j=0;j<h;j++){
            if(x[11-j][start+j]==0){
                x[11-j][start+j]='/';
            }
            else{
                x[11-j][start+j]='v';
            }
            if(x[11-h+1+j][start+h+j]==0){
                x[11-h+1+j][start+h+j]='\\';
            }
            else{
                x[11-h+1+j][start+h+j]='v';
            }
        }
    }
    int usei;
    for(int i=0;i<100;i++){
        if(have[i]!=0){
            gainx(i);
            usei=i;
        }
    }

    for(int i=12-usej;i<=11;i++){
        for(int j=1;j<=usei;j++){
            if(x[i][j]==0){
                cout << ".";
            }
            else
            cout << x[i][j];
        }
        cout << endl;
    }
}

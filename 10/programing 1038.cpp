#include <bits/stdc++.h>
using namespace std;
double a[25][25];
double test[25][25];
int visit[25][25];
int n;
void check(int y,int x){
    double use=1.0;
    for(int i=x+1;i<n;i++){
        if(a[y][i]==0){
            use *= 0.005;
        }else
        use *= a[y][i];
    }
    for(int i=0;i<y;i++){
        if(a[i][x]==0){
            use *= 0.005;
        }else
        use *= a[i][x];
    }
    for(int i=y+1;i<n;i++){
        if(a[i][x]==0){
            use *= 0.005;
        }else
        use *= a[i][x];
    }
    test[y][x]=use;
}
main(){
    int usei,usej,x;
    double ans=1.0;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> x;
            a[i][j]=((double)x)/100.0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            check(j,i);
        }
        double minn=2;
        for(int j=0;j<n;j++){
            if(test[j][i]<minn && visit[j][i]==0){
                usei=j;
                usej=i;
                minn=test[j][i];
            }
        }
        ans *= a[usei][usej];
        for(int j=1;j<=20;j++){
            if(usej+j<=20){
            a[usei][usej+j]=1;
            visit[usei][usej+j]=1;
            }
        }
        for(int j=0;j<25;j++){
            for(int k=0;k<25;k++){
                test[i][j]=0.00;
            }
        }
    }
    printf("%.8f",ans*100);
}

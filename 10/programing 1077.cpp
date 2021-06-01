#include <bits/stdc++.h>
using namespace std;
int x[1002][1002];
main(){
    int n,m,a,b,c;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        scanf("%d",&b);
        x[a][b]++;
    }
    for(int i=0;i<1001;i++){
        for(int j=0;j<1001;j++){
            if(i==0 && j!=0){
                x[i][j] = x[i][j-1] + x[i][j];
            }
            else if(j==0 && i!=0){
                x[i][j] = x[i-1][j] + x[i][j];
            }
            else if(i!=0 && j!=0){
                x[i][j] = x[i][j-1] + x[i-1][j] + x[i][j] - x[i-1][j-1];
            }
        }
    }
    for(int j=0;j<m;j++){
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        int k1=a+c,k2=b+c,k3=a-c-1,k4=b-c-1;
        if(k1>=1001){
            k1=1000;
        }
        if(k2>=1001){
            k2=1000;
        }
        if(k3<0){
            k3=1001;
        }
        if(k4<0){
            k4=1001;
        }
        printf("%d\n",x[k1][k2]-x[k3][k2]-x[k1][k4]+x[k3][k4]);
    }
}

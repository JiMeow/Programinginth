#include <bits/stdc++.h>
using namespace std;
int x[100001][2];
main(){
    int n,m,k,kk;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        scanf("%d",&k);
        x[i][1]=k;
        x[i][0]=i;
    }
    for(int i=0;i<m;i++){
        scanf("%d",&k);
        scanf("%d",&kk);
        int _1=k,_2=kk;
        while(x[k][0]!=k){
            x[k][0]=x[x[k][0]][0];
            k=x[k][0];
        }
        while(x[kk][0]!=kk){
            x[kk][0]=x[x[kk][0]][0];
            kk=x[kk][0];
        }
        if(x[k][1]>x[kk][1]){
            x[kk][0]=x[k][0];
            x[k][1] += x[kk][1]/2;
            printf("%d\n",x[k][0]);
        }
        else if(x[k][1]<x[kk][1]){
            x[k][0]=x[kk][0];
            x[kk][1]+=x[k][1]/2;
            printf("%d\n",x[k][0]);
        }
        else if(x[k][1]==x[kk][1]){
            if(k<kk){
                x[kk][0]=x[k][0];
                x[k][1] += x[kk][1]/2;
                printf("%d\n",x[k][0]);
            }
            else if(k>kk){
                x[k][0]=x[kk][0];
                x[kk][1]+=x[k][1]/2;
                printf("%d\n",x[k][0]);
            }
            else{
                printf("-1\n");
            }
        }
    }
}

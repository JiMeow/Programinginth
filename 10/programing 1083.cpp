#include <stdio.h>
int x[1000001];
main(){
    int n,k,z1,z2;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x[i]);
    }
    for(int i=1;i<n;i++){
        if(x[i]<x[i+1]){
            x[i] = x[i+1]-x[i];
            x[i] += x[i-1];
        }
        else{
            x[i] = x[i-1];
        }
    }
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&z1);
        scanf("%d",&z2);
        printf("%d\n",x[z2-1]-x[z1-1]);
    }
}

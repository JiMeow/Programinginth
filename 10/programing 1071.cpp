#include <bits/stdc++.h>
using namespace std;
int x[1010][1010];
main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d",&a);
        scanf("%d",&b);
        x[b][a]=1;
    }
    for(int i=0;i<m;i++){
        int a,b,r,countt=0;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&r);
        for(int j=b-r;j<=b+r;j++){
            for(int k=a-r;k<=a+r;k++){
                if(j>=0 && j<=1000 && k>=0 && k<=1000){
                    if(x[j][k]==1){
                        countt++;
                        x[j][k]=0;
                    }
                }
            }
        }
        printf("%d\n",countt);
    }
}

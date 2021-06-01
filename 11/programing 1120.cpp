#include <bits/stdc++.h>
using namespace std;
int x[1000001];

main(){
    int n,k1,k2,k3;
    for(int i=1;i<=1000000;i++){
        for(int j=i;j<=1000000;j+=i){
            x[j]++;
        }
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int yes=0;
        scanf("%d",&k1);
        scanf("%d",&k2);
        scanf("%d",&k3);
        for(int j=k1;j<=k2;j++){
            if(x[j]==k3){
                yes++;
            }
        }
        printf("%d\n",yes);
    }
}

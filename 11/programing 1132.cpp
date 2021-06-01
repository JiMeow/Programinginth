#include<bits/stdc++.h>
using namespace std;
main(){
    int n,k1,k2;
    cin >> n;
    for(int i=0;i<n;i++){
        scanf("%d %d",&k1,&k2);
        if(k1<=k2+1){
            printf("B\n");
        }
        else{
            if((k1-k2)%2==0){
                printf("A\n");
            }
            else{
                printf("B\n");
            }
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
main(){
    int n,m,k,sum;
    cin >> n >> m;
    int mm=m;
    int nn=n;
    if(n<m){
        int temp=n;
        n=m;
        m=temp;
    }
    while(1){
        k=n%m;
        n=m;
        m=k;
        if(k==0){
            sum=n;
            break;
        }
    }
    for(int i=1;i<=sum;i++){
        if(mm%i==0 && nn%i==0){
            printf("%d %d %d\n",i,nn/i,mm/i);
        }
    }
}

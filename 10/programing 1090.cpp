#include <bits/stdc++.h>
using namespace std;
unsigned long long int x[1000010];
main(){
    int n,k,a;
    unsigned long long int ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        x[k]++;
    }
    scanf("%d",&a);
    if(a%2==0){
        ans+= (x[a/2]*(x[a/2]-1))/2;
    for(int i=0;i<a/2;i++){
        if(x[i]!=0 && x[a-i]!=0 && i<1000001 && (a-i)<1000001 && i>=0 && (a-i)>=0){
            ans += x[i]*x[a-i];
        }
    }
    }
    else{
        for(int i=0;i<=a/2;i++){
        if(x[i]!=0 && x[a-i]!=0 && i<1000001 && (a-i)<1000001 && i>=0 && (a-i)>=0){
            ans += x[i]*x[a-i];
        }
    }
    }
    printf("%lld",ans);
}

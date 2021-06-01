#include <bits/stdc++.h>
using namespace std;
unsigned long long int ans=0;

unsigned long long int up(unsigned long long int node){
    return (node*(node+1))/2;
}

main(){
    int n,k;
    cin >> n;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        ans += k*up(n-i);
        ans=ans%2553;
    }
    printf("%lld",ans);
}

#include <bits/stdc++.h>
using namespace std;
main(){
    int n,k1,k2;
    vector<unsigned long long int> x,y;
    scanf("%d",&n);
    unsigned long long int ans=0;
    for(int i=0;i<n;i++){
        scanf("%d",&k1);
        scanf("%d",&k2);
        x.push_back(k1);
        y.push_back(k2);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    for(int i=0;i<x.size();i++){
        ans -= (unsigned long long int)x[i]*(x.size()-1-i)+y[i]*(x.size()-1-i);
        ans += (unsigned long long int)x[i]*(i) + y[i]*(i);
    }
    printf("%lld",ans);
}

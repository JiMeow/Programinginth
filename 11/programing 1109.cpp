#include <bits/stdc++.h>
using namespace std;
main(){
    int n,k1,k2,ans=0;
    scanf("%d",&n);
    vector<pair<int,int>> x;
    for(int i=0;i<n;i++){
        scanf("%d",&k1);
        scanf("%d",&k2);
        x.emplace_back(k1,k2);
    }
    sort(x.begin(),x.end());
    for(int i=0;i<x.size();i++){
        for(int j=i+1;j<x.size();j++){
            if(x[i].second>x[j].second && x[i].first!=x[j].first){
                ans+=x[i].first+x[j].first;
            }
        }
    }
    printf("%d",ans);
}

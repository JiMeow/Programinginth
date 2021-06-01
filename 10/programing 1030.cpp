#include <bits/stdc++.h>
using namespace std;
double all[100001];
main(){
    //price have
    vector<pair<double,int>> ans;
    int n,nn;
    double x,y;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin >> x >> y;
        ans.push_back({x/y,y});
    }
    scanf("%d",&n);
    int z=0;
    sort(ans.begin(),ans.end());
    for(int i=0;i<n;i++){
        scanf("%d",&nn);
        while(1){
            if(ans[z].second>nn){
                all[i] += nn*ans[z].first;
                ans[z].second -= nn;
                break;
            }
            else if(ans[z].second<nn){
                all[i] += ans[z].first*ans[z].second;
                nn -= ans[z].second;
                z++;
            }
            else if(ans[z].second==nn){
                all[i] += ans[z].first*ans[z].second;
                z++;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
            printf("%.3f\n",all[i]);
    }
}

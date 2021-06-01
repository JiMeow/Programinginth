#include <bits/stdc++.h>
using namespace std;
main(){
    vector<pair<unsigned long long int,unsigned long long int>> x;
    vector<pair<unsigned long long int,unsigned long long int>> use;
    unsigned long long int n,k1,k2;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> k1 >> k2;
        x.emplace_back(k2,k1);
    }
    sort(x.begin(),x.end());
    use.emplace_back(x[0].first,x[0].second);
    for(int i=1;i<n;i++){
        use.emplace_back(x[i].first,x[i].second+use[i-1].second);
    }
    double maxx=0;
    unsigned long long int moneyy,ans;
    for(int i=0;i<use.size();i++){
        if(maxx<(double)use[i].second / (double)use[i].first){
            maxx=(double)use[i].second / (double)use[i].first;
            moneyy=use[i].first;
            ans=use[i].second;
        }
    }
    cout << ans << " " << moneyy;
}
/*
5
3 30
6 10
10 20
7 50
18 70
*/

#include <bits/stdc++.h>
using namespace std;
deque<pair<char,int>> x[200001];
main(){
    int l,t,n,where;
    char direction;
    cin >> l >> t >> n;
    for(int i=0;i<n;i++){
        cin >> where >> direction;
       x[where].emplace_back(direction,i);
    }
    for(int i=0;i<t;i++){
        for(int j=1;j<l-1;j++){
            if(x[j][0].first=='L'){
                x[j-1].push_back(x[j][0]);
                x[j].pop_front();
            }
            if(x[j][0].first=='D'){
                x[j+1].push_back(x[j][0]);
                x[j].pop_front();
            }
        }
        for(int j=0;j<l;j++){
            if(x[j][0]=='L' &&
        }
    }
}

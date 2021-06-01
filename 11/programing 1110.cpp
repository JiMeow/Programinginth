#include <bits/stdc++.h>
using namespace std;
main(){
    unsigned long long int ans=0;
    vector<int> x,use;
    vector<pair<int,int>> xx;
    int n,k,k1,k2;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> k1;
        use.push_back(k1);
    }
    for(int i=0;i<use.size();i++){
        if(use[i]==k){
            x.push_back(i);
        }
    }
    for(int i=0;i<x.size();i++){
        ans += (unsigned long long int) max(x[i]+1,n-x[i]);
        cout << ans;
    }
}

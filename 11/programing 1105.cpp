#include <bits/stdc++.h>
using namespace std;
main(){
    int n,k,kk;
    cin >> n >> k;
    vector<int> x;
    for(int i=0;i<n;i++){
        scanf("%d",&kk);
        x.push_back(kk);
    }
    sort(x.begin(),x.end());
    cout << x[x.size()-k];
}

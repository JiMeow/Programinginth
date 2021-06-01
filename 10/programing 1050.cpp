#include <bits/stdc++.h>
using namespace std;
map<vector<int>,int> mapp;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
            vector<int> vec;
        for(int j=0;j<m;j++){
            int x;
            cin >> x;
            vec.emplace_back(x);
        }
        mapp[vec]=i+1;
    }
    vector<int> ans;
    for(int i=0;i<m;i++){
        int k;
        cin >> k;
        ans.emplace_back(k);
    }
    if(mapp.find(ans)!=mapp.end()){
        cout << mapp[ans];
        return 0;
    }
    for(auto& key:mapp){
        vector<int> k=key.first;
        for(int i=0;i<m;i++){
            k[i]=ans[i]-k[i];
        }
        if(mapp.find(k)!=mapp.end()){
            if(key.second==mapp[k]) break;
            if(key.second>mapp[k]) cout << mapp[k] << " " << key.second;
            else cout <<key.second << " "  << mapp[k];
            return 0;
        }
    }
    cout << "NO";
}

#include <bits/stdc++.h>
using namespace std;
main(){
    int n,k;
    int x[10];
    cin >> n;
    for(int i=1;i<=9;i++){
        cin >> k;
        x[i]=k;
    }
    map<int,int> xx;
    for(int i=9;i>=1;i--){
        if(i==9){
            xx[9]=x[9];
        }
        else{
            if(x[i]<x[i+1]){
                xx[i]=x[i];
            }
            else{
                x[i]=x[i+1];
            }
        }
    }
    int minn=1e9;
    for(auto& key:xx){
        minn=min(key.second,minn);
    }
    map<int,int> yy;
    for(auto& key:xx){
        if(key.second<2*minn){
            yy[key.first]=key.second;
        }
    }
    vector<pair<int,int>> yes,dif;
    for(auto& key:yy){
        yes.emplace_back(key.second,key.first);
    }
    sort(yes.begin(),yes.end());
    // yes<money,number>
    for(int i=0;i<yes.size();i++){
        dif.emplace_back(yes[i].first-yes[0].first,yes[i].second);
    }
    deque<int> ans;
    for(int i=0;i<n/yes[0].first;i++){
        ans.push_front(yes[0].second);
    }
    /*for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;*/
    // dif <number,money>;
    n = n%yes[0].first;
    deque<int> h;
    /*for(int i=0;i<dif.size();i++){
        cout << dif[i].first << " ";
    }
    cout << endl;*/
    while(1){
        int print=0;
        int out=0;
        for(int i=dif.size()-1;i>=0;i--){
            if(n>=dif[i].first && n!=0){
                n -= dif[i].first;
                print++;
                h.push_back(dif[i].second);
                if(h.size()>=ans.size()) out++;
                break;
            }
        }
        if(print==0 || out>0){
            break;
        }
    }
    for(int i=0;i<h.size();i++){
        ans[i]=h[i];
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i];
    }
}

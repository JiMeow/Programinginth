#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> a; //x_axis && height //
vector <int> aa;
vector<pair<int,int>> ans;
int use1,use2,use11,use22;

int walk(int node){
    for(int i=node+1;i<a.size();i++)
    if(a[node].first+a[node].second>a[i].first){
        if(node!=a.size()-1){
            walk(i);
        }
    }
    aa.push_back(node);
}

int walkback(int node){
    for(int i=node-1;i>=0;i--){
        if(a[node].first-a[node].second<a[i].first){
            if(node!=0){
                walk(i);
            }
        }
    }
    aa.push_back(node);
}

main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        a.push_back({x,y});
    }
    for(int i=0;i<a.size();i++){
        walk(i);
        sort(aa.begin(),aa.end());
        ans.push_back({aa[aa.size()-1]-i,i+1});
        while(!aa.empty()){
            aa.pop_back();
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        if(ans[i].first==ans[ans.size()-1].first){
            use2=ans[i].second;
            use22=ans[i].first;
            break;
        }
        //cout << ans[i].first << "=" << ans[i].second << endl;
    }
    /*cout << "------------------------------" << endl;
    cout << "------------------------------" << endl;
    cout << "------------------------------" << endl;*/
    while(!ans.empty()){
        ans.pop_back();
    }

    for(int i=0;i<a.size();i++){
        walkback(i);
        sort(aa.begin(),aa.end());
        ans.push_back({i-*aa.begin(),i+1});
        while(!aa.empty()){
            aa.pop_back();
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        if(ans[i].first==ans[ans.size()-1].first){
            use1=ans[i].second;
            use11=ans[i].first;
            break;
        }
        //cout << ans[i].first << "=" << ans[i].second << endl;
    }
    if(use11==use22){
    if(use1<=use2){
        cout << use1 << " L";
    }else{
        cout << use2 << " R";
    }
    }
    else if(use11>use22){
        cout << use1 << " L";
    }
    else if(use11<use22){
        cout << use2 << " R";
    }
}

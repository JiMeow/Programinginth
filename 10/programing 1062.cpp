#include <bits/stdc++.h>
using namespace std;
int n,m;
string x,y,use;
vector<char> ans;

void check(int key,int main){
    char more[3]={use[key],x[main],y[main]};
    sort(more,more+3);
    use[key]=more[1];
}

main(){
    cin >> n >> m;
    cin >> x >> y >> use;
    for(int i=0;i<use.size();i++){
        for(int j=0;j<x.size();j++){
            check(i,j);
        }
        ans.push_back(use[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i];
    }
}

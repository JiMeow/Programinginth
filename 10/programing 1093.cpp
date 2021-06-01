#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
map<vector<int>,int> mapp;
int dy(vector<int> vec){
    if(mapp.find(vec)!=mapp.end()){
        return mapp[vec];
    }
    int maxx=0;
    if(vec.size()<=2){
        return mapp[vec]=0;
    }
    if(vec.size()==3){
        return mapp[vec]=max(0,vec[0]+vec[1]-vec[2]);
    }
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec.size();j++){
            vector<int> aa,bb;
            if(i!=0 || j!=vec.size()-1){
            for(int ii=0;ii<i;ii++){
                aa.push_back(vec[ii]);
            }
            for(int ii=i;ii<=j;ii++){
                bb.push_back(vec[ii]);
            }
            for(int ii=j+1;ii<vec.size();ii++){
                aa.push_back(vec[ii]);
            }
            maxx=max(dy(aa)+dy(bb),maxx);
            }
        }
    }
    return mapp[vec]=maxx;
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << dy(a);
}

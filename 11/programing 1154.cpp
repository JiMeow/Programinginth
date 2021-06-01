#include<bits/stdc++.h>
using namespace std;
int n,k,ans=0,e=101;
string x;
unordered_map<int,int> mapp;

int kmp(int node){
    int maxx=0,now=0,want=0,con=1;
    for(int i=0;i<node;i++) con *= e;
    for(int i=0;i<x.size();i++){
        now = now*e + x[i];
        if(i>=node){
            now -= x[i-node]*con;
        }
        mapp[now]++;
        maxx=max(maxx,mapp[now]);
    }
    if(maxx>=k){
        mapp.clear();
        return 1;
    }
    mapp.clear();
    return 0;
}

void bi(int start,int endd){
    while(start<=endd){
    int mid=(start+endd)/2;
    int z=kmp(mid);
    if(z==1){
        ans=max(ans,mid);
        start=mid+1;
    }
    else if(z==0){
        endd=mid-1;
    }
    }
}

main(){
    cin >> n >> k >> x;
    bi(0,n-1);
    cout << ans;
}

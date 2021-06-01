#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> mapp;
pair<int,pair<int,int> > maxx[100010];
int ans;
main(){
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++){
        int x,y,z;
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&z);
        if(maxx[mapp[y]].first<z){
            maxx[mapp[y]].first=z;
            maxx[mapp[y]].second.first=y;
            maxx[mapp[y]].second.second=x;
        }
        else if(maxx[mapp[y]].first==z && maxx[mapp[y]].second.first>y){
            maxx[mapp[y]].second.first=y;
            maxx[mapp[y]].second.second=x;
        }
        mapp[y]++;
        ans=max(ans,mapp[y]);
    }
    for(int i=0;i<ans;i++){
        printf("%d\n",maxx[i].second.second);
    }
}

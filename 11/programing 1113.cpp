#include<bits/stdc++.h>
using namespace std;
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a=0;
    int b=0;
    int n,m;
    cin >> n >> m;
    unordered_map<int,int> mapp[m+1];
    mapp[0][0]=0;
    int maxx=0;
    for(int i=1;i<=n;i++){
        char x;
        cin >> x;
        if(x=='O'){
            a++;
        }
        else if(x=='R'){
            b++;
        }
        if(mapp[i%(m+1)].find(a-m*b)!=mapp[i%(m+1)].end()){
            maxx=max(i-mapp[i%(m+1)][a-m*b],maxx);
        }
        else{
            mapp[i%(m+1)][a-m*b]=i;
        }
    }
    cout << maxx;
}

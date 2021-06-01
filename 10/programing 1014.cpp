#include<bits/stdc++.h>
using namespace std;
int extra[3001];
main(){
    int W,H,n,x,y,z;
    int space=0,almost=0;
    cin >> W >> H >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        for(int i=x+1;i<=x+y;i++){
            extra[i] += 1;
        }
    }
    for(int i=1;i<=W;i++){
        if(extra[i]==0){
            space++;
            //cout << i;
        }
        else if(extra[i]==1){
            almost++;
        }
    }
    cout << space*H << " " << almost*H;
}

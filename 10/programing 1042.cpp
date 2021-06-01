#include <bits/stdc++.h>
using namespace std;
int x[5005],y[5005];
main(){
    int a,b,c,x1,y1,r;
    cin >> a >> b >> c;
    for(int i=0;i<c;i++){
        cin >> x1 >> y1 >> r;
        for(int i=x1-r;i<=x1+r;i++){
            if(x1-r>=0 && x1+r<=5000)
            x[i]++;
        }
        for(int i=y1-r;i<=y1+r;i++){
            if(y1-r>=0 && y1+r<=5000)
            y[i]++;
        }
    }
    int maxx=0;
    for(int i=0;i<=5000;i++){
        maxx=max(maxx,x[i]);
        maxx=max(maxx,y[i]);
    }
    cout << maxx;
}

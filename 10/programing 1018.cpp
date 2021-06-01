#include <bits/stdc++.h>
using namespace std;
main(){
    int n;
    int countt=0;
    int x=0,y=0;
    int direct=1;
    cin >> n;
    for(int i=0;i<n;i++){
        string a;
        int k;
        cin >> a >> k;
        //N==0
        //E==1
        //S==2
        //W==3
        if(a=="RT"){
            direct += 1;
            direct %= 4;
        }
        if(a=="LT"){
            direct += 3;
            direct %= 4;
        }
        if(a=="BW"){
            direct += 2;
            direct %= 4;
        }
        if(direct==0){
            y+=k;
        }
        if(direct==1){
            x+=k;
        }
        if(direct==2){
            y-=k;
        }
        if(direct==3){
            x-=k;
        }
        if(x>=50000 || x<=-50000 || y>=50000 || y<=-50000){
            countt++;
        }
    }
    if(countt>0) {cout << "DEAD"; return 0;}
    cout << x << " " << y <<endl;
    if(direct==0){
            cout << "N";
        }
        if(direct==1){
            cout << "E";
        }
        if(direct==2){
            cout << "S";
        }
        if(direct==3){
            cout << "W";
        }

}

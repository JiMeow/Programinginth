#include<bits/stdc++.h>
using namespace std;
main(){
    int x,y,z;
    cin >> x >> y >> z;
    int use=0;
    for(int i=0;i<x*y*z;i++){
        int k;
        cin >> k;
        use+=k;
    }
    cout << use;
}

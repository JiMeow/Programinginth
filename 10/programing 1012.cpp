#include<bits/stdc++.h>
using namespace std;
int a[5]; // 8, 6, 4, 2, 1;
int x,k[5],n;

main(){
    cin >> x;
    for(int i=0;i<x;i++){
        for(int j=0;j<5;j++){
            cin >> a[j];
            k[j] += a[j];
        }
    }
    n+=k[0]*8;
    n+=k[1]*6;
    n+=k[2]*4;
    n+=k[3]*2;
    n+=k[4]*1;
    cout << (n+7)/8;
}

#include <bits/stdc++.h>
using namespace std;
int countt=0;
main(){
    int n,k;
    cin >> k >> n;
    for(int i=0;i<n;i++){
        bitset<33> a(i),b(i+1);
        bitset<33> c;
        c=a^b;
        for(int i=0;i<k;i++){
            if(c[i]==1){
                countt++;
            }
        }
    }
    cout << countt;
}

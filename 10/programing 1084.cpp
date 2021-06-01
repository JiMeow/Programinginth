#include <bits/stdc++.h>
using namespace std;
main(){
    unsigned long long int ans=0;
    int x,y,k;
    cin >> x >> y >> k;
    for(int i=x;i<=y;i++){
        int m=i;
        while(m!=0){
            ans += m/5;
            m /= 5;
        }
        //ans=ans%k;
    }
    cout << ans%k;
}

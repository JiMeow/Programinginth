#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin >> n;
    for(int j=0;j<n;j++){
    long double a,ans=1;
    cin >> a;
    for(long double i=1;i<=a;i++){
        ans=ans*2;
    }
    printf("%.0LF",ans);
    cout << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
main(){
    int a,b,l;
    cin >> a >> b >> l;
    int x[a+b+1][l+1];
    for(int i=0;i<=a+b;i++){
        for(int j=0;j<l;j++){
            x[i][j]=0;
        }
    }
    for(int i=-a+a;i<=b+a;i++){
        for(int j=0;j<l;j++){
            if(i==0) x[i][j]++;
            if(i==a+b) x[i][j]++;
        }
    }
    for(int i=-a+a;i<=b+a;i++){
        for(int j=0;j<l;j++){
            cout << x[i][j] << " ";
        }
        cout << endl;
    }

}

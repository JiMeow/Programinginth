#include <bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin >> n;
    if(n%2==1){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j==n/2+2){
                cout << "*";
            }
            else if(j-i==n/2){
                cout << "*";
            }
            else if(i-j==n/2){
                cout << "*";
            }
            else if(i+j==n+n/2+1){
                cout << "*";
            }
            else{
                cout << "-";
            }
        }
        cout << endl;
    }
    }
    else{
        for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++){
            if(i+j==n/2+1){
                cout << "*";
            }
            else if(j-i==n/2-1){
                cout << "*";
            }
            else if(i-j==n/2){
                cout << "*";
            }
            else if(i+j==n+n/2){
                cout << "*";
            }
            else{
                cout << "-";
            }
        }
        cout << endl;
    }
    }
}

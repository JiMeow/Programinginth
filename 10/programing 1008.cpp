#include<bits/stdc++.h>
using namespace std;
int a[300000];
main(){
    int a1,a2,h,n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a1 >> h >> a2;
        for(int j=a1;j<a2;j++){
            if(h>a[j]){
                a[j]=h;
            }
        }
    }
   int node=0;
    for(int i=1;i<=30000;i++){
        if(a[i]!=node){
            cout << i << " " << a[i] << " ";
            node=a[i];
        }

    }
}

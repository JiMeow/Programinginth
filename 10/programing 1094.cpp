#include <bits/stdc++.h>
using namespace std;
main(){
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    while(a[0]!=1 || a[1]!=2 || a[2]!=3 || a[3]!=4 || a[4]!=5){
        for(int i=0;i<4;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                for(int j=0;j<5;j++){
                    cout << a[j] << " ";
                }
                cout << endl;
            }
        }
    }
}

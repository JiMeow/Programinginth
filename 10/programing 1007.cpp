#include<bits/stdc++.h>
using namespace std;
main(){
    int A[3]={1,1,0},x,y,z,a,b,c;
    int B[24][3];
    for(int i=0;i<24;i++){
        b=A[1];
        c=A[2];
        b=A[1]+A[2]+A[0];
        c=A[1];
        A[1]=b;
        A[2]=c;
        B[i][1]=b;
        B[i][2]=c;
    }
    while(x!=-1){
    cin >> x;
    for(int i=0;i<24;i++){
        if(i==x-1){
            cout << B[i][1] << " " << B[i][1]+B[i][2]+1 << endl;
        }
    }
    }
}

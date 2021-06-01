#include<bits/stdc++.h>
using namespace std;
main(){
    string x;
    int a=0,b=0,countt=0;
    cin >> x;
    for(int i=0;i<x.size();i++){
        if(x[i]=='('){
            a++;
        }
        if(x[i]==')'){
            if(a>0){
                a--;
            }
            else if(a==0){
                countt++;
            }
        }
    }
    countt += a;
    cout << countt;
}

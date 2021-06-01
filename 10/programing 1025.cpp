#include<bits/stdc++.h>
using namespace std;
unsigned long long int glcd(unsigned long long int x,unsigned long long int y){
    unsigned long long int start=x*y;
    if(y>x){
        int temp=x;
        x=y;
        y=temp;
    }
    unsigned long long int use;
    while(true){
        use=x%y;
        x=y;
        y=use;
        if(use==0){
            return start/x;
        }
    }
}
main(){
    unsigned long long int n,k;
    unsigned long long int x;
    cin >> n;
    cin >> x;
    for(int i=1;i<n;i++){
        cin >> k;
        x=glcd(x,k);
    }
    cout << x;
}

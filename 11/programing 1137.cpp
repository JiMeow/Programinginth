#include <bits/stdc++.h>
using namespace std;
unsigned long long int ans[16];
void car(){
    for(int i=0;i<16;i++){
        if(ans[i]>=10){
            ans[i+1] += ans[i]/10;
            ans[i] %= 10;
        }
    }
}
main(){
    unsigned long long int n,k;
    vector<unsigned long long int> x;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&k);
        x.push_back(k);
    }
    //ans += (x.size()-2)*x[0];
    for(int i=0;i<x.size()-2;i++){
        ans[0] += x[0];
        car();
    }
    for(int i=1;i<x.size();i++){
        ans[0] += x[i];
        car();
    }
    int print=0;
    for(int i=15;i>=0;i--){
        if(ans[i]!=0){
            print++;
        }
        if(print>0){
            printf("%lld",ans[i]);
        }
    }
}

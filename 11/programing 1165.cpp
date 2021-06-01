#include<bits/stdc++.h>
using namespace std;
int prime[1000010];
long long go(long long x,long long y){
    if(x==0 || y==0) return max(x,y);
    if(x<y) swap(x,y);
    while(1){
        long long k=x%y;
        if(k==0) break;
        x=y;
        y=k;
    }
    return y;
}

main(){
    for(int i=3;i<=1000000;i++){
        if(prime[i]==0){
            for(int j=2*i;j<=1000000;j+=i){
                prime[j]=1;
            }
        }
    }
    long long n,gcd,k;
    cin >> n;
    cin >> gcd;
    for(int i=1;i<n;i++){
        cin >> k;
        gcd=go(k,gcd);
    }
    unordered_map<int,int> mapp;
    int aa=1;
    while(gcd!=1){
        while(gcd%2==0){
            gcd/=2;
            aa++;
        }
        for(int i=3;i<=1000000;i++){
            if(prime[i]==0){
                while(gcd%i==0){
                    gcd/=i;
                    mapp[i]++;
                }
            }
        }
    }
    for(auto& key:mapp){
        aa*=(key.second+1);
    }
    cout << aa;
}

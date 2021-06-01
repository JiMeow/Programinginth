#include<bits/stdc++.h>
using namespace std;
int x[200001],k,n;
bool check(){
    int countt=0;
    for(int i=0;i<n;i++){
        if(x[i]!=-1){
            countt++;
        }
    }
    if(countt==1){
        return 1;
    }
    return 0;
}
void go(int start,int kk){
    int use=0;
    if(check()){
        return;
    }
    int i=0;
    int dis;
    while(1){
        if(x[(start+i)%n]!=-1){
            use++;
            if(use==kk){
                dis=x[(start+i)%n];
                x[(start+i)%n]=-1;
            }
            if(use==kk+1){
                break;
            }
        }
        i++;
    }
    go((start+i)%n,dis);
}

main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        x[i]=i+1;
    }
    go(0,k);
    for(int i=0;i<n;i++){
        if(x[i]!=-1){
            printf("%d",x[i]);
            return 0;
        }
    }
}

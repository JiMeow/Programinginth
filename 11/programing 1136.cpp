#include <bits/stdc++.h>
using namespace std;
int m,n,k,yes=0;
vector<int> x;
vector<int> xx;

void go(){
    double averx=0.0,averxx=0.0;
    int k=0;
    for(int i=0;i<x.size();i++){
        averx += x[i];
    }
    averx /= x.size();
    for(int i=0;i<xx.size();i++){
        averxx += xx[i];
    }
    averxx /= xx.size();
    if(averx>averxx){
        int use=-1;
        for(int i=0;i<x.size();i++){
            if(x[i]<averx && x[i]>averxx){
                use=i;
            }
        }
        if(use==-1){
            yes++;
            return;
        }
        x.erase(x.begin()+use);
    }
    else if(averx<averxx){
        int use=-1;
        for(int i=0;i<xx.size();i++){
            if(xx[i]<averxx && x[i]>averx){
                use=i;
            }
        }
        if(use==-1){
            yes++;
            return;
        }
        xx.erase(xx.begin()+use);
    }
    else{
        yes++;
        return;
    }
}

main(){
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++){
        scanf("%d",&k);
        x.push_back(k);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        xx.push_back(k);
    }
    int countt=0;
    while(1){
        if(x.size()==1 || xx.size()==1){
            break;
        }
        go();
        if(yes>0){
            cout << countt;
            return 0;
        }
        countt++;
    }
    printf("%d",countt);
}

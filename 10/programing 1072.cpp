#include <bits/stdc++.h>
using namespace std;
int z[500000];
int n,m;
void _a(int x,int y){
    int temp=z[x-1];
    z[x-1]=z[y-1];
    z[y-1]=temp;
}

void _b(int x,int y){
    z[x-1]=y;
}

void _c(int x){
    for(int i=0;i<x/2;i++){
        int temp=z[i];
        z[i]=z[x-1-i];
        z[x-1-i]=temp;
    }
    for(int i=x;i<x+(n-x+1)/2;i++){
        int temp=z[i];
        z[i]=z[n+x-i-1];
        z[n+x-1-i]=temp;
    }
}

void _q(int x){
    printf("%d\n",z[x-1]);
}

main(){
    char k[2];
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        scanf("%d",&z[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%s",&k);
        if(k[0]=='a'){
            int q,w;
            scanf("%d",&q);
            scanf("%d",&w);
            _a(q,w);
        }
        if(k[0]=='b'){
            int q,w;
            scanf("%d",&q);
            scanf("%d",&w);
            _b(q,w);
        }
        if(k[0]=='c'){
            int q;
            scanf("%d",&q);
            _c(q);
        }
        if(k[0]=='q'){
            int q;
            scanf("%d",&q);
            _q(q);
        }
    }
    for(int i=0;i<n;i++){
      //  cout << z[i] << " ";
    }
}

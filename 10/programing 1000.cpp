#include<bits/stdc++.h>
using namespace std;
main(){
    int x,y,countt=0;
    cin >> x >> y;
    struct{
        char b[1001];
    }a[y];
   
	int count=0;
    for(int i=0;i<y;i++){
        scanf("%s",a[i].b);
    }
    for(int i=0;i<y-1;i++){
            for(int j=0;j<x;j++){
                if(a[i].b[j]!=a[i+1].b[j]){
                    countt++;
                }
            }
            if(countt>=3){
                printf("%s",a[i].b);
                count++;
            	break;
        	}
        countt=0;
    }
    
    if(count==0){
        printf("%s",a[y-1].b);
	}
}

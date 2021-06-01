#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main(){
	int count=0,m,n,l,k,c;
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&l);
	scanf("%d",&k);
	scanf("%d",&c);
	int x[m][n];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&x[i-1][j-1]);
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			count=count+x[i-1][j-1];
		}
	}
	count=count+(l*c*k);
	if(count%c!=0){
		printf("%d",(count/c)+1);
	}else{
		printf("%d",count/c);
	}
}

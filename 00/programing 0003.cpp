#include<stdlib.h>
#include<stdio.h>
main()
{
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	int c[m*n],v[m*n],ans[m*n];
	for(int i=1;i<=m;i++){
		for(int a=1;a<=n;a++){
			scanf("%d",&c[(i-1)*n+a-1]);
		}	
	}
	for(int i=1;i<=m;i++){
		for(int a=1;a<=n;a++){
			scanf("%d",&v[(i-1)*n+a-1]);
		}	
	}
	for(int i=1;i<=m*n;i++){
		ans[i-1]=c[i-1]+v[i-1];
	}
	
	for(int i=1;i<=m;i++){
		for(int a=1;a<=n;a++){
			printf("%d ",ans[(i-1)*n+a-1]);
		}
			printf("\n");
	}
}

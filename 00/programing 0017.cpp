#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main(){
	int x[4],ans,d;
	for(int i=1;i<=4;i++){
		scanf("%d",&x[i-1]);
	}
	for(int i=1;i<=6;i++){
		for(int j=1;j<=3;j++){
			if(x[j-1]<=x[j]){
				d=x[j-1];
				x[j-1]=x[j];
				x[j]=d;
			}
		}
	}
	ans=x[1]*x[3];
	printf("%d",ans);
}

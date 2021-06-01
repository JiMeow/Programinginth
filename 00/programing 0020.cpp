#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main(){
	long s,A,B,C,E,D,a,d,x[5]={0,0,0,0,0},c[5];
	for(int i=1;i<=4;i++){
		scanf("%d",&a);
		x[0]=x[0]+a;
	}
	c[0]=x[0];
	for(int i=1;i<=4;i++){
		scanf("%d",&a);
		x[1]=x[1]+a;
	}
	c[1]=x[1];
	for(int i=1;i<=4;i++){
		scanf("%d",&a);
		x[2]=x[2]+a;
	}
	c[2]=x[2];
	for(int i=1;i<=4;i++){
		scanf("%d",&a);
		x[3]=x[3]+a;
	}
	c[3]=x[3];
	for(int i=1;i<=4;i++){
		scanf("%d",&a);
		x[4]=x[4]+a;
	}
	c[4]=x[4];
	for(int i=1;i<=6;i++){
		for(int j=1;j<=4;j++){
			if(x[j-1]<x[j]){
				d=x[j-1];
				x[j-1]=x[j];
				x[j]=d;
			}
		}
	}
	if(c[0]==x[0]){
		printf("1");
	}
	else if(c[1]==x[0]){
		printf("2");
	}
	else if(c[2]==x[0]){
		printf("3");
	}
	else if(c[3]==x[0]){
		printf("4");
	}
	else if(c[4]==x[0]){
		printf("5");
	}
	printf(" %d",x[0]);
}

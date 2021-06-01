#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
main(){
	char num1[100],num2[100],c;
	scanf("%s",&num1);
	scanf("%s",&c);
	scanf("%s",&num2);
	int x1=strlen(num1);
	int x2=strlen(num2);
	if(x1!=x2){
	if(c==42){
		int z=x1+x2-2;
		printf("1");
		for(int i=1;i<=z;i++){
			printf("0");
		}
	}
	if(c==43){
		if(x1<x2){
			int d=x1;
			x1=x2;
			x2=d;
		}
		int z=x1-x2;
		printf("1");
		for(int i=1;i<z;i++){
			printf("0");
		}
		printf("1");
		for(int i=1;i<x2;i++){
			printf("0");
		}
	}
	}
	else{
		if(c==43){
		printf("2");
		for(int i=1;i<x1;i++){
			printf("0");
			}
		}
		if(c==42){
			int z=x1+x2-2;
			printf("1");
			for(int i=1;i<=z;i++){
			printf("0");
			}
		}
	}
	
}

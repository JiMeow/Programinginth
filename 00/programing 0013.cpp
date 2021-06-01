#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main(){
	int a[9];
	int All=0;
	for(int i=1;i<=9;i++){
		scanf("%d",&a[i-1]);
	}
	for(int i=1;i<=9;i++){
		All=All+a[i-1];
	}
	for(int j=1;j<=8;j++){
		for(int m=j+1;m<=9;m++){
			if((All-a[j-1]-a[m-1])==100){
				for(int i=1;i<=9;i++){
					if(i!=j&&i!=m){
						printf("%d\n",a[i-1]);
					}
				}	
			}
		}
	}
}

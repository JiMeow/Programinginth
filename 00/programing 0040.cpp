#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int n,b;
	scanf("%d",&n);
	char number[n][10000];
	for(int i=0;i<n;i++){
		scanf("%s",&number[i]);
	}
	for(int i=0;i<n;i++){
		b=strlen(number[i]);
		if(number[i][b-1]=='2' || number[i][b-1]=='4' || number[i][b-1]=='6' || number[i][b-1]=='8' || number[i][b-1]=='0'){
			if(b==1 && number[i][b-1]=='2'){
				printf("T\n");
			}else{
				printf("F\n");
			}
			
		}else{
			printf("T\n");
		}
	}
}

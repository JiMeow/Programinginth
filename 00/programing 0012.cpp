#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
main()
{
	char x[15];
	int a;
	scanf("%s",&x);
	a=strlen(x);
	printf(".");
	for(int i=1;i<=a;i++){
		if(i%3!=0){
			printf(".#..");	
		}
		else{
			printf(".*..");
		}	
	}
	printf("\n");
	for(int i=1;i<=a;i++){
		if(i%3!=0){
			printf(".#.#");	
		}
		else{
			printf(".*.*");
		}	
	}
	printf(".\n");
	printf("#");
	for(int i=1;i<=a;i++){
		if(i%3==1){
			printf(".%c.#",x[i-1]);	
		}
		else if(i%3==2){
			printf(".%c.",x[i-1]);	
		}
		else{
			printf("*.%c.*",x[i-1]);
		}	
	}
	if(a%3==2){
			printf("#");	
	}
	printf("\n");
	for(int i=1;i<=a;i++){
		if(i%3!=0){
			printf(".#.#");	
		}
		else{
			printf(".*.*");
		}	
	}
	printf(".\n");
	printf(".");
	for(int i=1;i<=a;i++){
		if(i%3!=0){
			printf(".#..");	
		}
		else{
			printf(".*..");
		}	
	}
	}


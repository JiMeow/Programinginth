#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main(){
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	if(x>y){
		printf("2");
	}
	else{
	if(y%x==0){
		printf("%d",y/x);
	}else{
		printf("%d",(y/x)+1);
	}
}
}

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main(){
	int count=0,x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	while(true){
		if(x==1){
			break;
		}else{
		if(x%2==1){
			x=(x-1)/2;
			count=count+1;
		}else{
			x=x/2;
			count=count+1;
		}
	}
	}
	while(true){
		if(y==1){
			break;
		}else{
		if(y%2==1){
			y=(y-1)/2;
			count=count+1;
		}else{
			y=y/2;
			count=count+1;
		}
	}
	}
	while(true){
		if(z==1){
			break;
		}else{
		if(z%2==1){
			z=(z-1)/2;
			count=count+1;
		}else{
			z=z/2;
			count=count+1;
		}
	}
	}
	printf("%d",count);
}
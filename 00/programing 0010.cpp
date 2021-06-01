#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main()
{
	int a[3]={0,0,0},d;
	char x[50];
	a[0]=1;
	
	scanf("%s",&x);
	
	for(int i=1;i<=50;i++){	
		if(x[i-1]==65){
			d=a[0];
			a[0]=a[1];
			a[1]=d;
		}
		else if(x[i-1]==66){
			d=a[1];
			a[1]=a[2];
			a[2]=d;
		}
		else if(x[i-1]==67){
			d=a[0];
			a[0]=a[2];
			a[2]=d;
		}
	}
	for(int i=1;i<=3;i++){
		if(a[i-1]==1){
			printf("%d",i);
		}
	}
}

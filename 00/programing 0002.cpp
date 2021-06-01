#include<stdlib.h>
#include<stdio.h>

int a;
main()
{
	scanf("%d",&a);
	long long i;
	int b[a];
	for(i=1;i<=a;i++){
		scanf("%d",&b[i-1]);
	}
	long long max=b[0],min=b[0];
	for(i=1;i<=a;i++){
		if(min>b[i-1]){
			min=b[i-1];
		}
		if(max<b[i-1]){
			max=b[i-1];
		}
	}
	printf("%d\n",min);
	printf("%d",max);
}

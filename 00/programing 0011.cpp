#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main()
{
	int a[10],b[10],d,count=1;
	for(int i=1;i<=10;i++){
		scanf("%d",&a[i-1]);
		b[i-1]=a[i-1]%42;
	}
	for(int i=1;i<=45;i++){
		for(int j=1;j<=9;j++){
			if(b[j-1]>b[j]){
				d=b[j-1];
				b[j-1]=b[j];
				b[j]=d;
			}
		}
	}
	for(int j=1;j<=9;j++){
		if(b[j-1]!=b[j]){
			count=count+1;
		}
	}
	printf("%d",count);
}

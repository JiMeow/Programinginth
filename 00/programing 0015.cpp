#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main(){
	int a[3],d,d1,d2,swap;
	for(int i=1;i<=3;i++){
		scanf("%d",&a[i-1]);
	}
	for(int i=1;i<=2;i++){
		if(a[i-1]>a[i]){
			d=a[i-1];
			a[i-1]=a[i];
			a[i]=d;
		}
	}
	d1=a[1]-a[0]-1;
	d2=a[2]-a[1]-1;
	if(d1<d2){
		swap=d1;
		d1=d2;
		d2=swap;
	}
	printf("%d",d1);
}

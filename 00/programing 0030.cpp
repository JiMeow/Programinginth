#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main(){
	char a[1000001];
	scanf("%s",a);
	int m3=0,sum=0;
	int b=strlen(a);
	for(int i=0;i<b;i++){
		m3=m3+a[i]-48;
	}
	m3=m3%3;
	printf("%d",m3);
	for(int i=0;i<b/2;i++){
		char c=a[i];
			a[i]=a[b-i-1];
			a[b-i-1]=c;
	}
	
	for(int i=0;i<b;i++){
		if(i%2==0){
			sum=sum+(1*(a[i]-48));
		}
		else if(i%2==1){
			sum=sum+(10*(a[i]-48));
		}
	}
	sum=sum%11;
	printf(" %d",sum);
}

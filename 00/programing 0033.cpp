#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main(){
	int a,d;
	scanf("%d",&a);
	int A[a];
	int B[a];
	for(int i=1;i<=a;i++){
		scanf("%d",&A[i-1]);
	}
	for(int i=1;i<=a;i++){
		B[i-1]=A[i-1];
	}
	for(int i=1;i<=((a-1)*a)/2;i++){
		for(int j=1;j<=a-1;j++){
			if(A[j-1]<A[j]){
			d=A[j-1];
			A[j-1]=A[j];
			A[j]=d;
			}
		}
	}
	for(int i=1;i<=a;i++){
		if(A[0]==B[i-1]){
			printf("%d ",i);
		}
	}
}

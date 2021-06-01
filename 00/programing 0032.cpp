#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main(){
	int a,d,x;
	scanf("%d",&a);
	int A[a];
	for(int i=1;i<=a;i++){
		scanf("%d",&A[i-1]);
	}
	for(int i=1;i<=((a-1)*a)/2;i++){
		for(int j=1;j<=a-1;j++){
			if(A[j-1]>A[j]){
			d=A[j-1];
			A[j-1]=A[j];
			A[j]=d;
			}
		}
	}
	int i=0;
	if(A[0]==0){
		while(true){
			i=i+1;
			if(A[i]!=0){
				d=A[0];
				A[0]=A[i];
				A[i]=d;
				break;
			}
		}
	}
	for(int i=1;i<=a;i++){
		printf("%d",A[i-1]);
	}
}

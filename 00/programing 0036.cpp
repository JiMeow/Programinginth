#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main(){
	int N,a,b;
	long long int countN=1,counta=1,countb=1;
	scanf("%d",&N);
	if(N==1){
		printf("2");
	}else{
	if(N%2==0){
		a=N/2;
		b=N-a;
	}else{
		a=(N-1)/2;
		b=N-a;
	}
	for(int i=N;i>b;i--){
		countN=countN*i;
	}
	for(int i=1;i<=a;i++){
		counta=counta*i;
	}
	if(N%2==0){
	printf("%lld",countN/counta);
}
else{
	printf("%lld",2*countN/counta);
}
}
}

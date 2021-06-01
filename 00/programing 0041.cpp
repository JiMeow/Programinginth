#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main(){
	double a;
	scanf("%lf",&a);
	if((int)a==1){
		printf("2.000000");
	}
	else if((int)a==3){
		printf("%.6lf",3.7320508075);
	}
	else if((int)a%2==0){
		printf("%.6lf",a);
	}
	else{
		printf("%.6lf",a+0.464102);
	}
}

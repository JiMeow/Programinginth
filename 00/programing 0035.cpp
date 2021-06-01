#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main(){
int n;
double max=0,c;
scanf("%d",&n);
double a[n],b[n];
for(int i=0;i<n;i++){
	scanf("%lf%lf",&a[i],&b[i]);
}
for(int i=0;i<n;i++){
	for(int k=0;k<n;k++){
		for(int j=0;j<n;j++){
			c=(a[i]*b[k]+a[k]*b[j]+a[j]*b[i]-b[i]*a[k]-b[k]*a[j]-b[j]*a[i])/2;
			if(c<0){
				c=-c;
			}
			if(max<c){
				max=c;
			}
		}
	}
}
printf("%.3lf",max);
}

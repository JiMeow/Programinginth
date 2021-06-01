#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int a,b,dayall=0;
main(){
//	char day[7]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
/*	char day[7][10];
	day[0]="Thursday ";
	day[1]="Friday   ";
	day[2]="Saturday ";
	day[3]="Sunday   ";
	day[4]="Monday   ";
	day[5]="Tuesday  ";
	day[6]="Wednesday";
*/	
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&a);
	scanf("%d",&b);
	for(int i=1;i<=b-1;i++){
		dayall=dayall + month[i-1];
	}
	dayall=dayall+a-1;
	int z=dayall%7;
//	printf("%s",day[z]);
	if(z==0){
		printf("Thursday");
	}
	else if(z==1){
		printf("Friday");
	}
	else if(z==2){
		printf("Saturday");
	}
	else if(z==3){
		printf("Sunday");
	}
	else if(z==4){
		printf("Monday");
	}
	else if(z==5){
		printf("Tuesday");
	}
	else if(z==6){
		printf("Wednesday");
	}
}

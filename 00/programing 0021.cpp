#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main(){
	char x[100];
	//scanf("%s",&x);
	gets(x);
	int a=strlen(x),count=0;
	for(int i=2;i<=a-1-(2*count);i++){
		if(x[i-1]==112){
			if(x[i-2]==97 && x[i]==97){
				for(int j=i;j<=a-2;j++){
					x[j-1]=x[j+1];
				}
				count=count+1;
			}
			else if(x[i-2]==101 && x[i]==101){
				for(int j=i;j<=a-2;j++){
					x[j-1]=x[j+1];
				}
				count=count+1;
			}
			else if(x[i-2]==105 && x[i]==105){
				for(int j=i;j<=a-2;j++){
					x[j-1]=x[j+1];
				}
				count=count+1;
			}
			else if(x[i-2]==111 && x[i]==111){
				for(int j=i;j<=a-2;j++){
					x[j-1]=x[j+1];
				}
				count=count+1;
			}
			else if(x[i-2]==117 && x[i]==117){
				for(int j=i;j<=a-2;j++){
					x[j-1]=x[j+1];
				}
				count=count+1;
			}
		}
	}
	int b=a-2*count;
	for(int i=1;i<=b;i++){
		printf("%c",x[i-1]);
	}
}

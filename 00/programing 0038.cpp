#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
main(){
	int a,z,n,count=0;
	scanf("%d",&a);
	char x[a][30];
	char change[a+1][31];
	for(int i=1;i<=a;i++){ //accept all data
		scanf("%s",&x[i-1]);
	}
	for(int k=1;k<=((a-1)*a)/2;k++){ //1+2+3+4+5+6+...+(a-1);		
	for(int j=1;j<=a-1;j++){ //piority 1st charactor
	if(x[j-1][0]>x[j][0]){
		for(int i=1;i<=30;i++){
			change[j][i]=x[j-1][i-1];
			x[j-1][i-1]=x[j][i-1];
			x[j][i-1]=change[j][i];
		}
	}	
}
}
	for(int k=1;k<=((a-1)*a)/2;k++){ //piority another charactor
	for(int j=1;j<=a-1;j++){
		n=0;
	while(x[j-1][n]==x[j][n]){
			n=n+1;
			if(x[j-1][n]>x[j][n]){
			for(int i=1;i<=30;i++){
				change[j-1][i-1]=x[j-1][i-1];
				x[j-1][i-1]=x[j][i-1];
				x[j][i-1]=change[j-1][i-1];
			}
			}
		}
	}
	}
	printf("\n\n");	

for(int i=1;i<=a-1;i++){//alpha
	if(x[i-1]==x[i]){
		for(int j=1;j<=a-1;j++){
			for(int k=1;k<=a;k++){
                    x[j-1][k-1]=x[j][k-1];
            }
        }
	}
}
/*for(int i=1;i<=a-1;i++){//beta
	int j=0;
	int count=0;
	while(j<=29){
		if(x[i-1][j]==x[i][j]){
			count=count+1;
		}
		j=j+1;
	}
	if(count==30){
		printf("Error");
		for(int k=1;k<=a-1;k++){
			for(int l=1;l<=30;l++){
				x[k-1][l-1]=x[k][l-1];
			}
		}
	}
}*/
for(int i=1;i<=a;i++){ //ANS#
	printf("%s\n",x[i-1]);
}

}

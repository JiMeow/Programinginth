#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main()
{
	int a[3];
	int d,ans1,ans2,ans3;
	char x[3];
	scanf("%d",&a[0]);
	scanf("%d",&a[1]);
	scanf("%d",&a[2]);	
	for(int i=1;i<=3;i++){
		scanf("%s",&x[i-1]);
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=2;j++){
			if(a[j-1]>a[j]){
				
				d=a[j-1];
				a[j-1]=a[j];
				a[j]=d;
			}
		}
	}
	if(x[0]==65){
		if(x[1]==66){
			ans1=a[0];
			ans2=a[1];
			ans3=a[2];
			
		}
		else{
			ans1=a[0];
			ans2=a[2];
			ans3=a[1];
		}
	}
	else if(x[0]==66){
		if(x[1]==65){
			ans1=a[1];
			ans2=a[0];
			ans3=a[2];
		}
		else{
			ans1=a[1];
			ans2=a[2];
			ans3=a[0];
		}
	}
	else if(x[0]==67){
		if(x[1]==65){
			ans1=a[2];
			ans2=a[0];
			ans3=a[1];
		}
		else{
			ans1=a[2];
			ans2=a[1];
			ans3=a[0];
		}
	}
	printf("%d %d %d",ans1,ans2,ans3);

}

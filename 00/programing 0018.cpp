#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main(){
	int i,j,count=0,f,q,m=1,a[1000];
	scanf("%d",&q);
	scanf("%d",&f);
	for(i=2;i<=q;i++){
		count=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				count=count+1;
			}
		}
			if(count==2){
				a[m-1]=i;
				m=m+1;
				count=0;
			}
		
	}	
	int n,ans=0,ANS=0,z;
	for(n=0;n<=m-2;n++){
		for(i=1;i<=q;i++){
			if(i%a[n]==0){
				for(int z=1;z<=n;z++){
						if(i%a[z-1]!=0){
							ans=ans+1;
						}			
				}
				if(ans==n){
					ANS=ANS+1;
					ans=0;
					if(ANS==f){
						printf("%d",i);
					}
				}
				else{
					ans=0;
				}
			}
		}
	}	
}
	

#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
	long a,counts=0,countm=0;
	char ch[10000];
	scanf("%s",&ch);
	a=strlen(ch);
	for(int i=1;i<=a;i++){		
	if(0!=islower(ch[i-1])){
		counts=counts+1;
	}
	else{
		countm=countm+1;
	}
}
	if(counts>0 && countm>0)
	{
		printf("Mix");
	}
	else if(counts>0)
	{
		printf("All Small Letter");
	}
	else if(countm>0)
	{
	printf("All Capital Letter");
	}
}


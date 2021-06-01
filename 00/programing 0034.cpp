#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main(){
	int A,B,C,a,b,c,d,x;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	if((B*B-(4*A*C))<0){
		printf("No Solution");
	}
	else{
		b=B+sqrt((B*B-(4*A*C)));
	int b1=B+sqrt((B*B-(4*A*C)));
		d=B-sqrt((B*B-(4*A*C)));
	int d1=B-sqrt((B*B-(4*A*C)));
		a=2*A;
	int a1=2*A;
		c=2*A;
	int c1=2*A;
if(d1==0 || b1==0){
	printf("No Solution");
}
else{
if(b1>a1){
	x=b1;
	b1=a1;
	a1=x;
}
while(true){
	x=a1%b1;
	a1=b1;
	b1=x;
if(b1==0 || x==0){
	break;
}
}	
if(d1>c1){
	x=d1;
	d1=c1;
	c1=x;
}
while(true){
	
	x=c1%d1;
	c1=d1;
	d1=x;
if(d1==0 || x==0){
	break;
}
}
a=a/a1;
b=b/a1;
c=c/c1;
d=d/c1;

	if(a<0){
		a=0-a;
		b=0-b;
	}	
	if(c<0){
		c=0-c;
		d=0-d;
	}
	if(a>c){
		x=a;
		a=c;
		c=x;
		x=b;
		b=d;
		d=x;
	}
	else if(a==c)
	{
		if(b>d){
			x=b;
			b=d;
			d=x;
		}
	}
	if(A%a==0 && C%b==0 && A%c==0 && C%d==0){
	printf("%d ",a);
	printf("%d ",b);
	printf("%d ",A/a);
	printf("%d",C/b);
}
else{
	printf("No Solution");
}


}

}

}

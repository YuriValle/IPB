#include <stdio.h>
int exame(int, int);
int main(){
	int a,b,x;
	x = 0;
	a = 5;
	b = 6;
	do{
		x=exame(a,b);
		printf("A= %d B= %d\n",b,a);
	}while(a>=b);
}
int exame(a, b){
	int i,x;
	x = a;
	for(i=2;i>0;i--){
		x=x+i;
		printf("A= %d B= %d\n",a,x);
	}
	printf("I= %d R= %d\n",i,b);
	return x;
}

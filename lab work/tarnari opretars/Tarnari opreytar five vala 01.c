#include<stdio.h>
int main(){
	int a,b,c,d,e;
	
	printf("enter the number");
	scanf("%d",&a);
	printf("enter the number");
	scanf("%d",&b);
	printf("enter the number");
	scanf("%d",&c);
	printf("enter the number");
	scanf("%d",&d);
	printf("enter the number");
	scanf("%d",&e);
	
char max=a>b?a>c?a>d?a>e?'a':'c':'d':'e':
    b>c?b>d?b>e?'b':'d':'e':
    c>d?c>e?'c':'e':
    d>e?'d':'e';
    printf("char is %c",max);
    	
    	
}

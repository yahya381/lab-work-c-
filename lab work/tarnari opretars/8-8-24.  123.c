#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("enter the numbar");
	scanf("%d",&a);
	printf("enter the numbar");
	scanf("%d",&b);
	printf("enter the numbar");
	scanf("%d",&c);
	printf("enter the numbar");
	scanf("%d",&d);
	
	a<b?a<c?a<d?printf("a"):printf("c"):printf("d"):
    b<c?b<d?printf("b"):printf("c"):
    c<d?printf("c"):printf("d");
}

#include <stdio.h>
int main(){
	int x,y,z,w;
	printf("enter the number");
	scanf("%d",&x);
	printf("enter the number");
	scanf("%d",&y);
	printf("enter the number");
	scanf("%d",&z);
	printf("enter the number");
	scanf("%d",&w);
	
	x>y?x>z?x>w?printf("x"):printf("z"):printf("w"):
    y>z?y>w?printf("y"):printf("z"):
    z>w?printf("z"):printf("w");



}

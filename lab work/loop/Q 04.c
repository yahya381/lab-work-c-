#include<stdio.h>
int main(){
	/*
	12345
	1234
	123
	12
	1
	*/
	int i,j;
	for(i=1;i<=5;i++){
		for(j=i;j<=5;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
}

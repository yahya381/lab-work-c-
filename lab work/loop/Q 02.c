#include<stdio.h>
int main(){
	/*
	5
	45
	345
	2345
	12345
	*/
	int i,j;
	for(i=5;i>=1;i--){
		for(j=i;j<=5;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}

#include<stdio.h>
/*
11111
2222
333
44
5
*/
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=6-i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
}

#include<stdio.h>
/*
A
BA
CBA
DCBA
EDCBA
*/
int main(){
	int i,j;
	for(i=65;i<=69;i++){
		for(j=i;j>=65;j--){
			printf("%c",j);
		}printf("\n");
	}
}

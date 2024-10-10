#include<stdio.h>
/*
10101 i=5
1010  i=4
101   i=3
10    i=2
1     i=1
*/
int main(){
	int i,j;
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
		if(j%2==1){
			printf("1");
		
		}
		else{
			printf("0");
		}
		}
		printf("\n");
	}
}

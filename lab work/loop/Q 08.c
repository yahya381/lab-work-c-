#include<stdio.h>
/*
1
23
456
78910
1112131415
*/
int main(){
	int i,j,k=0;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d",k=k+1);
		}
		printf("\n");
	}
}

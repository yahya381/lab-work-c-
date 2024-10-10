#include<stdio.h>
int main(){
	int row;
	printf("enter the number of row");
	scanf("%d",&row);
	int columns;
	printf("enter the number of columns");
	scanf("%d",&columns);
	
	int y[row][columns];
	printf("enter array elements :\n");
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<columns;j++){
			printf("enter y[%d][%d]",i,j);
			scanf("%d",&y[i][j]);
		}
		printf("\n");
	}
	printf("array elements are :\n");
	

		for(j=0;j<columns;j++){
			printf("enter elements y[%d][%d] :",i,j,y[i][j]);
			
		}
		printf("\n");
	}


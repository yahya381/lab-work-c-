#include<stdio.h>
int main(){
	label:
		printf("enter 1 for pizza\n");
		printf("enter 2 for burger\n");
		printf("enter 3 for frenchfries\n");
		printf("enter 4 for exit\n");
		int choice;
		printf("enter thr choice");
		
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf
				("pizza ordered succesfully\n");
				goto label;
				break;
			case 2:
				printf
				("burger ordered succesfully\n");
				goto label;
				break;
			case 3:
				printf
				("frenchfries ordered succesfully\n");
				goto label;
				break;
			case 4:
				printf("exited");
				break;
				default:
					printf("invalid choice");
					goto label;
			
				
		}
		
}

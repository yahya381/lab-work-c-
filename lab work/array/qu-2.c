
#include<stdio.h>
int main(){
	int size;
	
	printf("enter array size : ");
	scanf("%d",&size);
	
	int y[size];
    printf("Enter array elements : \n"); 
    int i;
for(i=0;i<size;i++){
	printf("enter %dth element : ",i);
	scanf("%d",&y[i]);
}
printf("the array elements are : \n");
for(i=0;i<size;i++){
	printf("%dth element is : %d\n",i,y[i]);
	
	
}
float sum=0;
	float average;
	for(i=0;i<size;i++){
		sum=sum+y[i];
	}
sizeof(y)/sizeof(y[0]);
	
printf("average of an array : %f \n",average);
}


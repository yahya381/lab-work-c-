#include<stdio.h>
int main(){

int size,i,max,index;
printf("Enter the size of array : ");
scanf("%d",&size);

int arr[size];
printf("Enter the elements : \n");

for(i=0;i<size;i++){
	printf("Enter arr[%d] element : ",i);
	scanf("%d",&arr[i]);
}
for(i=0;i<size;i++){
	printf("arr[%d] element is : %d\n",i,arr[i]);
}
index=0;
max=arr[0];
for(i=0;i<size;i++){
	if(max<arr[i]){
		index=i;
		max=arr[i];
	}
}
printf("%d is max",index);
}

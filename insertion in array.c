// insertion in array
#include"stdio.h"
int main(){
	int size=10;
	int arr[10]={23,45,64,78,97,25,82,47,90,65};
	int loc=5,i;
	int x=size;
	//size++;
	while(x>=loc){
		arr[x+1]=arr[x];
		x--;
	}
	arr[loc]=100;
	printf("Item inserted.");
	printf("The new array is : \n");
	for(i=0;i<=size;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

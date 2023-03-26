// deletion in array
#include"stdio.h"
int main(){
	int size=10;
	int arr[10]={23,45,64,78,197,25,182,47,90,65};
	int loc=5,i;
	int x=loc;
	while(x<size){
		arr[x]=arr[x+1];
		x++;
	}
	printf("Item deleted from location!!!!\n");
	printf("The new array is :\n");
	for(i=0;i<size-1;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

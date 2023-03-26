//linear search
#include"stdio.h"
int main(){
	int arr[10]={23,45,64,78,97,25,82,47,90,65};
	int item=5,loc,i;
	for(i=0;i<10;i++){
		if (item==arr[i]){
			loc=i+1;
			break;
		}
	}
	if(loc!=0){
		printf("Item found at loc : %d",loc);
	}
	else{
		printf("Item not found!!!!");
	}
	return 0;
}

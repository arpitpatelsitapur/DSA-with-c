// implement POP operation in STACK using array
#include<stdio.h>
int STACK[100];                                     //globly declared array
int Top=0;                                          //globly declared position in stack
void Push(int item,int size){                       //defining push function
	if(Top!=size){
	    Top++;
	    STACK[Top]=item;
    }
	else{
		printf("Overflow!!! Push Not Possible.");
	}
}
void Pop(){                                         // defining pop function
	if(Top!=0){
	   printf("Item deleted : %d\n",STACK[Top]);
	   Top--;
    }
    else
       printf("Underflow!!! Pop Not Possible.");
}
int main(){
	int size,item,i,j,k;
	printf("Enter the size of stack : ");
	scanf("%d",&size);
	if(size==0){
	    printf("The Stack is empty.\n");
    }
    else{
    	printf("Push operation :::::: \n");
	    for(i=0;i<size;i++){
		   printf("Enter item %d : ",i+1);
		   scanf("%d",&item);
		   Push(item,size);                             //calling push function
	    }
	    printf("The Stack is :\n");
    }
	for(j=Top;j>0;j--){
		printf("%d\n",STACK[j]);
	}
	printf("Pop Operation :::::: \n");
	for(k=Top;k>0;k--){
	    Pop();                                        // calling pop fuction
    }
	return 0;
}

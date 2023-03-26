// implement Queue insertion and deletion
#include<stdio.h>
int Queue[25];
int Rear=0,Front=0;
void insert(int item){   
	Queue[Rear]=item;
	printf("Item %d inserted.\n",item);
	Rear++;
}
void delete(){
	int item=Queue[Front];
	printf("Item = %d deleted.\n",item);
	Front++;
}
void display(){
	int i;
	for(i=Front;i<Rear;i++){
		printf("%d  ",Queue[i]);
	}
}
int main(){
	int n,i=0;
	printf("Enter how many elements you have : ");
	scanf("%d",&n);
	int x;
	while(i<n){
	    printf("Enter %d item : ",i+1);
	    scanf("%d",&x);
	    insert(x);
	    i++;
    }
	printf("The Queue is ::::::::\n");
	display();
	int y;
	printf("\nEnter 1 or 2 accordingly:- \nA). 1 if you want perform INSERTION \nB). 2 if you want to perform DELETION\n");
	scanf("%d",&y);
	if(y==1){
		int z,k=0;
		printf("Enter how many elements you want to insert : ");
		scanf("%d",&z);
	    while(i<n+z){
	       int item;
	       printf("Enter the %d item you want to insert : ",k+1);
	       scanf("%d",&item);
	       insert(item);              // calling insert function
	       i++;
	       k++;
        }
        printf("The Queue after Insertion is ::::::::\n");
        display();
    }
    else{
    	int j;
    	printf("Enter how many elements you want to delete : ");
    	scanf("%d",&j);
    	while(j!=0){
	        delete();               // calling delete function
	        j--;
		}
		printf("The Queue after deletion is :::::::::\n");
	    display();	   
    }
	return 0;
}

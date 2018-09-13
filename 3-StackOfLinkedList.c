#include<stdio.h>
#include<stdlib.h>

 typedef struct node{
 	int data;
 	struct node* next;
 }node;
 
 node* start=NULL;
 node* top=NULL;
 int count=0;

 void push(int n){
 	
  node* newnode = (node*)malloc(sizeof(node));
      newnode->data = n ;
 	  newnode->next = NULL ;
 	  
  if(newnode==NULL)
    printf("\n Error : NO Memory Available");
    
  else{
   if(start==NULL){
      start=newnode;
	  top=newnode; }
	  
   else{
   	  top->next=newnode;
	  top=newnode; }
	  
	  count++;}
 	  
   }
   
 void pop(){
 	
 if(count==0)
  printf("\n Error : Stack is Empty");
  
 else{
 	if(count==1){
 	 node* temp=start;
 	 start=NULL;
 	 top=NULL;
	 free(temp); }
	
	else{
 	 node* ptr=start;
 	 node* preptr=NULL;

     while(ptr != top){
       preptr=ptr;
       ptr=ptr->next;}
       
     top=preptr;
	 top->next=NULL; 
     free(ptr);
     
     }
     
     count--; }
      
	}
	
  void print(){
  	
  	node* ptr=start;
  	while(ptr != NULL){
  		printf("%d " , ptr->data);
  		ptr=ptr->next;
	  }
	printf("\n");
	
	}
	
  void main(){
  	push(5);print();
  	push(10);print();
  	push(14);print();
  	push(56);print();
    pop();print();
    pop();print();
  	push(60);print();
  	pop();print();
  	push(63);print();
  }

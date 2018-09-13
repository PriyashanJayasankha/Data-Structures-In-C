#include<stdlib.h>

 struct set{
    int data;
    struct set* link; } ;
  
 typedef struct set node ;
 
 node* start = NULL ;
 
 node* SetFirstNode(int x){
 if(start == NULL)
 	{ node* newnode=(node*)malloc(sizeof(node));
 	newnode->data = x;
	newnode->link = NULL;
	start=newnode;}
 else
    { node* newnode=(node*)malloc(sizeof(node));
 	newnode->data = x;
	newnode->link = start;
	start=newnode; }
	 }
	
 node* SetLastNode(int x){
 	node* newnode=(node*)malloc(sizeof(node));
 	newnode->data = x;
	newnode->link = NULL;
 	
 	node* PTR = start;
 	
 	while(PTR->link != NULL)
	  PTR = PTR->link;
	  
	  PTR->link = newnode; }
	  
 node* InsertNextTo(int y , int x){
 	node* newnode=(node*)malloc(sizeof(node));
 	newnode->data = x;
 	
 	node* PTR = start;
 	
 	while(PTR->data != y)
 	  PTR = PTR->link;
 	  
 	  newnode->link = PTR->link ;
 	  PTR->link = newnode ; }
 	  
 node* InsertBefore(int y , int x){
 	node* newnode = (node*)malloc(sizeof(node));
 	newnode->data = x;
 	
 	node* PTR = start;
 	node* prePTR = NULL;
 	
 	while(PTR->data != y){
 	  prePTR = PTR ;
 	  PTR=PTR->link; }
 	  
 	newnode->link = prePTR->link ;
 	prePTR->link = newnode; }
 	
 node* DeleteNextTo(int x){
 	node* PTR = start;
 	
 	while(PTR->data != x){
 	  PTR=PTR->link; }
 	  
 	PTR->link=(PTR->link)->link ; }
 	
 node* DeleteFirstNode(){
 	start=start->link;
 }
 	
 node* DeleteBefore(int x){
 	node* PTR = start;
 	node* ptr = start;
 	node* prePTR = NULL;
 	node* preptr = NULL;
 	
 	while(PTR->data != x){
 	  prePTR = PTR ;
 	  PTR=PTR->link; }
 	  
 	while(ptr->data != prePTR->data){
 	  preptr = ptr ;
 	  ptr=ptr->link; }
 	  
 	if(preptr==NULL)
 	DeleteFirstNode();
 	else
 	preptr->link=prePTR->link ; }
    
	  
 void print(){
	node* PTR ;
	PTR=start;
	while(PTR!=NULL){
	   printf(" %d" , PTR->data);
	   PTR=PTR->link; 
	   }
	   printf("\n"); }
	   
 void main(){
 	
 	SetFirstNode(5);
 	print();
 	SetFirstNode(2);
 	print();
 	InsertNextTo(2,8);
 	print();
 	SetLastNode(10);
 	print();
 	SetFirstNode(4);
 	print();
 	InsertBefore(5,12);
 	print();
 	DeleteNextTo(8);
 	print();
    DeleteBefore(8);
 	print();
 	DeleteBefore(8);
 	print();
 	SetLastNode(50);
 	print();

 }
 

	  

#include<stdio.h>
#include<stdlib.h>

 struct block{
	int data;
	struct block* right;
	struct block* left; } ;
	
typedef struct block node ;

 
 node* Insert(node* tempRoot , int data){
 	
 	if(tempRoot==NULL){
 		node* newnode=(node*)malloc(sizeof(node));
 		newnode->data = data;
 		newnode->left = NULL;
 		newnode->right= NULL; 
		tempRoot = newnode;  }
 		
 	else if(data<tempRoot->data)
 		tempRoot->left = Insert(tempRoot->left , data);
 		
 	else if(data>tempRoot->data)
 	    tempRoot->right = Insert(tempRoot->right , data);
 	
 	else
 	    printf(" !! Duplicate Data");
		 
	return tempRoot;  }
	
	
int mainSearch(node* tempRoot ,int data){
	
	if(tempRoot == NULL)
	  return 0;
	  
	else if(data == tempRoot->data)
	  return 1;
	  
	else if(data>tempRoot->data)
	  mainSearch(tempRoot->right , data);
	 
	else if(data<tempRoot->data)
	  mainSearch(tempRoot->left , data);
	
}

void search(node* temp , int data ){
	int x = mainSearch(temp , data);
	
	 if(x==1)
	 printf(" Sucsess !! Found that Number");
	 
	 else
	 printf(" UnSucsess !! NOT_Found that Number");
}


void inOrder(node* tempRoot){
	if(tempRoot->left!=NULL)
	  inOrder(tempRoot->left);
	  
	printf(" %d " , tempRoot->data);
	
	if(tempRoot->right!=NULL)
	  inOrder(tempRoot->right); }

	

 	    
 void main(){
 	
 	node* root = NULL ;
 	
	root = Insert(root , 20);
	root = Insert(root , 10);
	root = Insert(root , 30);
	root = Insert(root , 35);
	search(root , 10);
    inOrder(root);
	
 
 	
 }

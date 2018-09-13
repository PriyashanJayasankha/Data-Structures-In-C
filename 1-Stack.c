#include<stdio.h>
#define max 3

 int stack[max];
 int top = -1 ;
 

 
 void Push(int n){
 	if(top == (max-1))
 	  printf("\nError:Stack is Full");
 	else{
 	top = top+1 ;
 	stack[top]=n; } }

 void Pop(){
 	if(top == -1)
 	 printf("\nError:Stack is empty");
 	else
 	 top = top-1 ;}
 	
 int Top(){
   return(stack[top]); }
   
 void Print(){
 	int i;
 	    printf("\n STACK : ");
  for(i=0;i<=top;i++){
 		printf(" %d" ,stack[i]);
	 }}

 void main(){
 	
 	Push(1) ; Print();
 	Push(5) ; Print();
 	Top();
 	Push(76) ; Print();
 	Push(8) ; Print();
 	Pop() ; Print();
 	Pop() ; Print();
 	Pop() ; Print();
 	Pop() ; Print();
 	Pop() ; Print();
 	Pop() ; Print();
 	Pop() ; Print();
 }
 
 


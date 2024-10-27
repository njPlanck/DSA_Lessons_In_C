#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node* next;
}Node;

Node* head;


//inserts data into the node
void Insert(int x){
  Node *temp = (Node*)malloc(sizeof(Node));
  temp->data = x;
  temp->next = head;
  head = temp;
} 

//prints data in the list
void Print(){
  Node *temp = head;
  while(temp!=NULL){
    printf("  %d",temp->data);
    temp = temp->next;
  }
  printf("\n");

} 

//deletes a node from the list
void Delete(int n){
  Node *temp1 = head;
  if(n==1){
    head = temp1->next;
    free(temp1);
    return;
  }
  for(int i=0;i<n-2;i++){
    temp1 = temp1->next;
    Node *temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
  }
} 


int main(){
  head = NULL; //empty list

  Insert(2);
  Insert(4);
  Insert(6);
  Insert(5); //insert items into the list
  Print();
  int n;
  printf("enter a position\n");
  scanf("%d",&n);
  Delete(n);
  Print();

  return 0;
}
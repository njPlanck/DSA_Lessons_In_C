//for this linked list, data can be inserted at a specified place
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node *next;
}Node;

Node * head;


void Print(){
  Node *temp = head;
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void Insert(int data, int n){
  Node *temp1 = (Node*)malloc(sizeof(Node));
  temp1->data = data;
  temp1->next = NULL;
  if (n==1){
    temp1->next = head;
    head = temp1;
    return;
  }
  Node *temp2 = head;
  for(int i=0;i<n-2;i++){
    temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
}

int main(){

  head = NULL; //head is null
  Insert(2,1);
  Insert(3,2);
  Insert(4,1);
  Insert(5,2);

  Print();

  return 0;
}
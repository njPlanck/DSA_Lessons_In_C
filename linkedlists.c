#include <stdio.h>
#include <stdlib.h>


//declare the node, which would be of type 'struct'
//here, the node contains data of a type 'int', and also a pointer to the next node

typedef struct node{
  int data;
  struct node *next;
}Node;

Node *head;

//a function to insert objects into the list
void Insert(int x){
  Node *temp = (Node*)malloc(sizeof(Node));
  temp->data = x;
  temp->next = head;
  head = temp;

}

//a function that prints the objects in the list
void Print(){
  Node *temp = head;
  printf("The Value is: [");
  while(temp!=NULL){
    printf(" %d",temp->data);
    temp = temp->next;
  }
  printf(" ]\n");
}

int main(void){
  
  head = NULL;   //empty head
  printf("How many numbers?\n");
  int n, x;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("Enter number to addded to the list here: \n");
    scanf("%d",&x);
    Insert(x);
    Print();
  }

  return 0;
}
#include<stdio.h> 
struct Node{
  int data;
  Node* link;
};

Node* A;
A = NULL;

Node* temp = (Node*) malloc(sizeof(Node));

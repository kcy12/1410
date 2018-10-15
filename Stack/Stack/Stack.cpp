#include "Stack.h"

Stack::Stack(){
  top = nullptr;
}

Stack::~Stack(){
   while(top != nullptr){
     pop();
   } 
}

void Stack::push(int num){
  Node *temp = new Node;
  temp->value = num;
  temp->next = nullptr;

  if(top == nullptr){
    top = temp;
  }
  else{
    temp->next = top;
    top = temp;
  }
}

void Stack::pop(){
  if(top != nullptr){
    Node*temp = top;
    top = top->next;
    delete temp;
  }
}

int Stack::peek(){
  return top->value;
}
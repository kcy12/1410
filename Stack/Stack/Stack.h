struct Node{
  int value;
  Node* next;
};


class Stack
{
  public:
    Stack();
    ~Stack();
    void push(int num);
    void pop();
    int peek();

  private:
    Node * top;
};
#include <iostream>
using namespace std;

class Stack
{

public:
  // Properties of Stack
  int size;
  int *arr;
  int top;

  // Fuctions of stack
  Stack(int size)
  {
    this->size = size;
    arr = new int[size];
    top = -1;
  }

  void push(int element)
  {
    if (size - top > 1)
    {
      top++;
      arr[top] = element;
    }
    else
    {
      cout << "Stack Overflow " << endl;
    }
  }
  void pop()
  {
    if (top >= 0)
    {
      top--;
    }
    else
    {
      cout << "Stack is empty";
    }
  }

  int peek()
  {
    if (top >= 0)
    {
      return arr[top];
    }
    else
    {
      cout << "Stack is empty";
      return -1;
    }
  }

  bool isempty()
  {
    if (top == -1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};

int main()
{

  Stack st(5);

  st.push(23);
  st.push(34);
  st.push(45);
  st.push(56);
  st.push(56);

  cout << st.peek() << endl;

  st.pop();

  cout << st.peek() << endl;

  st.pop();

  cout << st.peek() << endl;

  st.pop();

  cout << st.peek() << endl;

  st.pop();

  cout << st.peek() << endl;

  st.pop();

  cout << st.peek() << endl;

  st.pop();

  return 0;
}
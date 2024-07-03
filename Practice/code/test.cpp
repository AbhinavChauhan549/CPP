#include <iostream>
using namespace std;
class A
{
public:
  int a;
  void display()
  {
    cout << "Display A";
  }

  void display(int a)
  {
    cout << "value of a : " << a;
  }
};

int main()
{

  A obj;

  obj.display();
  cout << endl;
  obj.display(5);

  return 0;
}
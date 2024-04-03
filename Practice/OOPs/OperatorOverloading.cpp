#include<iostream>
using namespace std;

class demo {
    
public:
    int a;
    void operator+ (demo &obj){
        int value = this->a;
        int val = obj.a;
        int res = val - value;
        cout<<"Result is : "<<res;
    }
};
int main(){
    demo d, h , j;
    d.a = 2;
    h.a = 5;
      d + h;
     return 0;
}
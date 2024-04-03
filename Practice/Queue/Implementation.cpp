#include <queue>
#include <iostream>
using namespace std;
int main()
{

  // STL : Standard Template Library Implementation of Queue.
  // queue<int> a;

  // a.push(11);
  // a.push(12);
  // a.push(13);
  // a.push(14);
  // a.push(15);

  // cout << "size of queue is : " << a.size() << endl;

  // a.pop();

  // a.pop();

  // a.pop();

  // // cout << "size of queue is : " << a.size() << endl;

  // a.pop();

  // // cout << "size of queue is : " << a.size() << endl;

  // a.pop();

  // cout << "size of queue is : " << a.size() << endl;

  //    if (a.empty())
  // {
  //   cout << "queue is empty";
  // }
  // else
  // {
  //   cout << "queue is not empty";
  // }

  //=====================================================Class Representation of Queue===========================

  /*
  #include <bits/stdc++.h>
class Queue {
public:

int* arr;
int qfront ;
int rear ;
int size ;

    Queue() {
        // Implement the Constructor
        size = 10000;
        arr= new int[size];
        qfront=0;
        rear= 0;
    }

   ----------------- Public Functions of Queue -----------------

    bool isEmpty() {
        // Implement the isEmpty() function
         if(qfront==rear){
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == size ){
            cout<<"Queue is full";
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qfront==rear){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){
            qfront=0;
            rear=0;
        }
        return ans;
        }
    }

    int front() {
        // Implement the front() function
         if(qfront==rear){
            return -1;
        }else{
            return arr[qfront];
        }
    }
};
  */

  return 0;
}
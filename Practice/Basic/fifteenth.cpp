#include<iostream>
using namespace std;
int main(){
    int a ; 
    cout<<" Enter the amount : ";
    cin>>a;

    switch (1)
    {
    case 1: cout<<"!00 Notes  : "<<a/100<<endl;
        a=a%100;
        
     case 2 : cout<<"50 Notes  : "<<a/50<<endl;
        a=a%50;
       
     case 3 : cout<<"20 Notes  : "<<a/20<<endl;
        a=a%20;
        
     case 4 : cout<<"1 Notes  : "<<a/1<<endl;
        a=a%1;
        
    default: 
            break;
    
  
    }
     return 0;
}
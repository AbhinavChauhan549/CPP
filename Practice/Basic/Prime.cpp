#include<iostream>
using namespace std;

bool IsPrime(int a ){
    for(int i = 2 ; i<a; i++){
        if(a%i==0){
            return 0 ;
        }
    }
    return 1 ;
}
int main(){
    cout<<"Enter a number : ";
    int a; 
    cin>>a;
   cout<<IsPrime(a);
     return 0;
}
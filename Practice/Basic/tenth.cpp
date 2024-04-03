#include<iostream>
using namespace std;

int main (){

    int  n ; 
    cin>>n ;

    int i =1 ;
   
   
    while(i<=n){
         int s = n-i;
        int j = 1 ; 
       while(s){
        cout<<" ";
        s--;
       }
        while(j<=i){
            
            cout<<"*";
             j++;
        }
        cout<<endl;
        i++;
    }
}
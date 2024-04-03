#include<iostream>
using namespace std;

int main (){

    int  n ; 
    cin>>n ;

    int i =1 ;
    while(i<=n){
   int s = i-1;
   while(s){
    cout<<" ";
    s--;
   }
   int j=n;
   
        while(j>=i){
            
            cout<<i;
             j--;
        }
        cout<<endl;
        i++;
    }
}
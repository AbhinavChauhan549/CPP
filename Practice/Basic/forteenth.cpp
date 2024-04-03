#include<iostream>
using namespace std;

/* 

Dabbang Pattern

1234554321
1234**4321
123****321
12******21
1********1



*/
int main (){

    int  n ; 
    cin>>n ;

    int i =1 ;
    while(i<=n){
     int j =n ;
     while(j>=i){
     cout<<n-j+1<<" ";
      j--;

    }
    int star1 =i-1;
    while(star1){
        cout<<"* ";
        star1=star1-1;
    } 
     int star2 =i-1;
    while(star2){
        cout<<"* ";
        star2=star2-1;
    } 
         int k =n ;
     while(k>=i){
     cout<<k-i+1<<" ";
      k--;

    }

    cout<<endl;
    i++;
}
}
#include<iostream>
using namespace std;

void fib(int n ){
    int a =0 ; 
    int b = 1;
    cout<<a<<" "<<b<<" ";
    int ans;
    for(int i = 2 ; i<=n ; i++){
        ans = a + b ;
        a= b ;
        b =ans ;
        cout<<ans<<" ";
    }
}
int main(){
    int a ;
    cout<<"Enter the number : ";
    cin>>a;
    fib(a);
     return 0;
}
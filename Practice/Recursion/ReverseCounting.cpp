#include<iostream>
using namespace std;

void count(int n ){
    if(n<=0){
        return ;
    }
    int ans = n ;
     cout<<ans<<" ";
    n=n-1;
     count(n);
   
}
int main(){
    int n; 
    cin>>n ;

    count(n);
     return 0;
}
#include<iostream>
using namespace std;

void count(int n ){
    if(n<=0){
        return ;
    }
    int ans = n ;
    n=n-1;
     count(n);
    cout<<ans<<" ";
}
int main(){
    int n; 
    cin>>n ;

    count(n);
     return 0;
}
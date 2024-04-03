#include<iostream>
using namespace std;


int fact (int n ){
    int ans = 1;
    for(int i = 1 ; i<=n ; i++){
        ans= ans*i;
    }
    return ans;
}

int ncr (int n , int r ){
    int numertor = fact(n);
    int denominator = fact(r)*fact(n-r);

    return numertor/denominator;
}
int main(){
    cout<<"Enter two numbers : ";
    int a,b;
    cin>>a>>b;
    int result=ncr(a,b);
    cout<<result;
    
     return 0;
}
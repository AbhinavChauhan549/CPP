#include<iostream>
using namespace std;

int ap(int a){
    int ans = 3 * a +7 ;
    return ans; 
}
int main(){
    int a ;
    cout<<"Enter the number : ";
    cin>>a;
    int result=ap(a);
    cout<<result;
     return 0;
}
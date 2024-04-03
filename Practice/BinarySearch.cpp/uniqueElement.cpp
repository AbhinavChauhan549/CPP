#include<iostream>
using namespace std;
int main(){
    // In this , we are given odd array and m number of elements occur two times in an array and a single element occur one time in array 
    // So , we have to find that single element in an array 

    int arr[5]={1,3,4,1,3};
    int ans =0 ;
    for(int i = 0 ; i< 5 ; i++){
        ans  = ans ^ arr[i];
    }
    cout<<ans;
     return 0;
}
#include<iostream>
using namespace std;

int sum (int arr[], int size ){
    int total =0;
    for(int i =0 ; i<size ;i++){
        total = total + arr[i];
    }
    return total;
}
int main(){
    int n ;
    cin>>n;

    int arr[100];

    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }

    int a= sum(arr,n);
    cout<<a;
     return 0;
}
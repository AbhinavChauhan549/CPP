#include<iostream>
using namespace std;

bool findit (int arr[] , int s , int k){
    if(s==0){
        return false;
    }

    if (arr[0]==k){
        return true;
    }

    else{
        
    return findit(arr+1,s-1,k);;
}
}
int main(){
    int arr[6]={2,4,6,3,5,7};
    int k = 3;

    bool ans = findit(arr,6,k);

    cout<<"Result : "<<ans;
     return 0;
}
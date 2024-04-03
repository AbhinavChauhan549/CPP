#include<iostream>
using namespace std;



bool isTrue(int arr[] , int n  , int m , int mid ){
    int studentcount = 1 ;
    int sum = 0 ;
     
    for (int i = 0 ; i< n  ; i++){\
    if (sum+arr[i]<=mid ){
        sum=sum + arr[i];
    }
    else{
        studentcount++;
        if(studentcount>m || arr[i] > mid){
            return false;
        }
       
        sum = arr[i];

    }
  
    }
      return true;
}
int main(){
    int arr[5]={10, 20, 30, 40, 60};
    

    int start = 0 ; 
    int sum = 0 ; 

    for(int i = 0 ; i<5; i++){
        sum += arr[i];
    }

    int end  = sum ;

    int ans = -1;

    int mid =start + (end + start )/2;

    while (start <= end ){
        if(isTrue(arr, 5,2 , mid  )){
                ans =  mid ;
                end = mid - 1 ;
        }
        else{
            start = mid + 1 ;
        }
        mid = start + (end - start )/2;
    }

    cout<<ans ; 
     return 0;
}   
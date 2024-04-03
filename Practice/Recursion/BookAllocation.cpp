#include<iostream>
using namespace std;

// bool istrue(int *arr , int s , int e , int mid,int k , int size){
// int students  =  1 ;
// int bookSum= 0;

// for(int i = 0 ; i<size ; i++){
//     if(arr[i]+bookSum<=mid){
//         bookSum+= arr[i];
//     }

//     else{
//         students++;
//         if(students > k || arr[i]> mid){
//             return false;
//         }
//         bookSum = arr[i];
//     }
// }
// return true ;
// }
bool istrue(int *arr , int m  , int n , int mid ){
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
      return true;
    }
      return true;
}

int  BookAllocation(int *arr , int s , int e , int k , int size){
    int mid = s + (e-s)/2 ;
    if(s>=e){

        return s;
    }
    int ans ;
    

    if(istrue(arr,k,size,mid)){
        ans = mid ;
        BookAllocation(arr,s,mid-1,k,size);
    }
    else{
        BookAllocation(arr,mid+1,e,k,size);
    }
    return ans ;
}
int main(){
    int arr[5]={10, 20, 30, 40, 60};
    int size = 5;
    int s = 0 ;
    int sum = 0;
    for(int i = 0 ; i<5 ; i++){
        sum += arr[i];
    }
    int e = sum ;
    int k = 2;
     int ans = BookAllocation(arr , s , e,k, size );
     cout<<"Result is : "<<ans<<endl;

     return 0;
}
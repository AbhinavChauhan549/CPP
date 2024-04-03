#include<iostream>
using namespace std;
int main(){
     

     int arr[5]={8,9,1,2,3};

     int start=0;
     int end=4;

     int mid= start+((end-start)/2);

     while(start<end){   // The loop will end when end and start will point to the same index
            if(arr[mid]>=arr[0]){
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid= start + (end-start)/2;
     }

     cout<<start ; 
     // returning end will also work because both start and end will point towards same index only
     return 0;
}
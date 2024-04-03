#include<iostream>
using namespace std;
int main(){
    
     int arr[6]={1,3,4,1,3,1};

// First find the different elements in an array 
 int i, j, cnt = 1;
   //Traverse the array
   for (i = 1; i < 6; i++)      //hold an array element
   {
      for (j = 0; j < i; j++)   
      {
         if (arr[i] == arr[j])    //Check for duplicate elements
         {
            break;             //If duplicate elements found then break
         }
      }
      if (i == j)
      {
         cnt++;     //increment the number of distinct elements
      }
   }
  


// Find the count of each element in an array 

    int result[cnt];
     for(int i =0   ; i<6 ; i++){
        int ans = arr[i];
        int count = 0 ;
        for(int j=0 ; j<6 ; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        result[i]=count;
     }
bool isans = 1;
     for(int k =0 ; k<cnt ; k++){
        for(int m = 1 ; m<cnt ;m++){
        if(result[k]==result[m]){
           
            isans=0;
            break;
        }
      
     }
     isans=1;
     }
cout<<isans;

     return 0;
}
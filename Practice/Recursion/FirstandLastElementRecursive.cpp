#include<iostream>
using namespace std;

int FirstLeft(int *arr , int s , int e, int key){
    
     int ans;
    if(s>=e){
        return e ;
    }
   
   
    int mid = s + (e-s)/2;
if(arr[mid]==key){
     ans = mid ;
    return FirstLeft(arr , s ,mid-1,key);
    
    }
else if(arr[mid]<key){
    return FirstLeft(arr,mid+1,e,key);
   
}

else{
    return  FirstLeft(arr , s ,mid-1,key);
    
}
 



}

int LastRight(int *arr , int s , int e, int key){
 
 
 int ans;
 if(s>e){
        return e ;
    }
   
   
    
    int mid = s + (e-s)/2;
if(arr[mid]==key){
     ans = mid ;
     return LastRight(arr,mid+1,e,key);
   
    }
else if(arr[mid]<key){
   return LastRight(arr,mid+1,e,key);
   
}

else{
    return LastRight(arr , s ,mid-1,key);
   
}

}

// }

// int firstocc(int *arr , int s , int key ){

//     int ans ;
// for(int i = 0 ; i<s ; i++){
//     if(arr[i]==key){
//         ans = i;
//         return ans;
//     }
// }

    
// // firstocc(arr+1,s-1,key);
    
// return ans;
   
// }
// int lastocc(int *arr , int s , int key ){

//     int ans ;
// for(int i = s-1 ; i>=0 ; i--){
//     if(arr[i]==key){
//         ans = i;
//         return ans;
//     }
// }

    
// // firstocc(arr+1,s-1,key);
    
// return ans;
   
// }

// // void lastocc(int *arr , int e , int key){

// //     int ans ;

// //     if(arr[e]==key){
// //         ans = e;
// //         e--;
// //     }
    
// //         firstocc(arr-1,e-1,key);
    
// //     cout<<"Leftmost Occurence is at index : "<<ans<<endl;
// // }

int main(){
    

    int arr[10]={2,3,3,4,4,4,5,6,7,8};
    int size = 10;
    int key = 4;
    int i = 0;
//     int a = FirstLeft(arr,0,size-1,key);
//     int b = LastRight(arr,0,size-1,key);
// cout<<"Leftmost Occurence is at index : "<<a<<endl;
// cout<<"Rightmost Occurence is at index : "<<b<<endl;
   int a =  FirstLeft(arr,0,size-1,key);
 cout<<"Leftmost Occurence is at index : "<<a<<endl;
   int b =  LastRight(arr,0,size-1,key);
 cout<<"Rightmost Occurence is at index : "<<b<<endl;
 
     return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr [5]={1,2,3,7,5};
    int s = 12;

    int sum =0 ; 
        int i = 0 , j=0 ;
      int ans [2];
        
        while (i<5){
            sum+=arr[i];
            
            if(sum>s){
                while(j<i && sum>s){
                    sum-=arr[j];
                    j++;
                    if(sum==s){
                       ans[0]=j+1;
                        ans[1]=i+1;
                        
                    }
                }
            }
            else if(sum==s){
                      ans[0]=j+1;
                        ans[1]=i+1;
                       
       i++;  }
       else{
         ans[0]=-1;
        ans[1]=-1;
       }
        }
                        
for(int k = 0 ; k <2; k++){
    cout<<ans[k]<<" ";
}
    
     return 0;
}
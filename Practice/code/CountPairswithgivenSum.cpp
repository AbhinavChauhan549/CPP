/*
Given an array of N integers, and an integer K,
 find the number of pairs of elements in the array whose sum is equal to K.
*/
#include<iostream>
#include<unordered_map>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
      
        unordered_map<int, int> mapp;
        int count=0;
        for(int i=0; i<n; i++){
            if(mapp.find(k-arr[i])!=mapp.end()){
                count+=mapp[k-arr[i]];
            }
            mapp[arr[i]]++;
        }
        return count;
    
    }

    // find return karega iterator or end return karega last element ka iterator
int main(){
    
     return 0;
}
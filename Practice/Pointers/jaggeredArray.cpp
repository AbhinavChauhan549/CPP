#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int m ; 
    cin>>m;
    int* a = new int[m];
    

    for(int i=0 ; i<m ; i++){
        cin>>a[i];
    }

    int** arr =new int*[n];
    for(int i =0 ; i<n ; i++){
       
        arr[i]= new int[a[i]] ;
    }

    for(int i =0  ; i<n ;i++){
        for(int j =0 ; j <n ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i =0  ; i<n ;i++){
        for(int j =0 ; j <n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

     return 0;
}
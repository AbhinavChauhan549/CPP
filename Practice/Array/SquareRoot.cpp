#include<iostream>
using namespace std;

long long int squareroot(int n ){
    int start = 0 ; 
   
        int end = n-1;
        long long int mid=(start+end)/2;
         long long int ans = -1;
        while(start <=end){
                
                long long int square  = mid * mid ;
               
                if(square==n){
                    return mid;
                }
                else if(square>n){
                    end = mid- 1 ;
                }
                else{
                    start= mid+1;
                    ans= mid;
                }
                mid=(start+end)/2;
        }
        return ans;
}

double precision(int n , int p , int tempsol){
    double factor = 1;
    double ans = tempsol;
    for(int i = 0 ; i< p  ; i++){
        factor  = factor/10;
        for(double j = ans ; j*j<n ; j=j+factor){
                 ans = j ;
        }
    }
    return ans;
}

int main(){
    int n ;
    cin>>n;
    int a = squareroot(n);
    double b = precision(n,3,a);
    cout<<b;
     return 0;
}
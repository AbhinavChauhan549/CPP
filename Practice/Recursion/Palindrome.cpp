#include<iostream>
using namespace std;
bool palindrome(string st , int s , int e){

    if(s>e){
        return true ;
    }

    
    if(st[s]!=st[e]){
       return false ;
        }


       else {   
          return palindrome(st,s+1,e-1);
       }
    
}
int main(){
     string st ;
    cin>>st;
    
    bool ans = palindrome(st,0,st.length()-1);
    if(ans){
        cout<<"Palindrome";
    }
    else {
        cout<<"Not Palindrome";
    }
     return 0;
}
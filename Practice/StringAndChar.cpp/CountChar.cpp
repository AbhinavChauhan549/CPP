#include<iostream>
using namespace std;

int getCount(char a[] , int len ){
    int count= 0 ;
    for(int i = 0 ; a[i]!='\0 ' ; i++){
        count++;
    }
    return count;
}

void reverseChar(char s[]  , int len){
    int start = 0 ; 
    int end  = len-1 ;
    while(start <= end ){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    for(int i = 0 ; i< len ; i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    
}

bool palindrome(char s[] , int len ){
    char c[len] ;
    for(int i = 0 ; i< len ; i++){
        c[i]=check(s[i]);
       
    }
      int start = 0 ; 
    int end  = len-1 ;
    while(start <= end ){
      if(c[start]!=c[end]){
        return false;
      }
      else{
        start++;
        end--;
    }
    }
    return true;
}
char check (char s ){
    char ch ;
    if(s>='a' || s<='z'){
        return s;
    }
    else {
        char ch = (s - 'A')+'a';
    }
    return ch;
}
int main(){
    char s[7]={'A','B','H','I','N','A','V'};

    int count = getCount(s,7);
    cout<<"Number of Character : "<<count<<endl;

    reverseChar(s , 7);

    bool istrue = palindrome(s,7);
    cout<<"Given String is palindrome : "<<istrue;
     return 0;
}
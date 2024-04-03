#include<bits/stdc++.h>
#include<vector>
using namespace std;
 void reverseString(vector<char>& s) {
        int start =0 ;
        int end = s.size()-1;

        while(start<end){
            
                swap(s[start],s[end]);
                start++;
                end--;
            }
        
          for(int i=0 ; i<=end;i++){
                   cout<<s[i];
    }
    }

  
int main(){
    
 vector <char> a ;
     a.push_back('A');
    a.push_back('b');
    a.push_back('h');
    a.push_back('i');
    a.push_back('n');
    a.push_back('a');
    a.push_back('v');

 reverseString(a);



     return 0;
}
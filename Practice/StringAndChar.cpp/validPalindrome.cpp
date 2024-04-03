#include<bits/stdc++.h>
#include<string>

using namespace std ;



    bool removech(char ch ){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ||(ch>='0' && ch<='9')){
            return 1 ;

        }
        else{
            return 0 ;
        }

    }

    char tolower(char ch){
          if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
              return ch;
          }
          else{
              char temp=ch -'A'+ 'a';
              return temp;
          }
    }

    bool checkPal(string s ){
        int st =0 ; 
        int n = s.size();
        int end = n-1;

        while(st<=end){
            if(s[st]!=s[end]){
                return 0;
            }
            else{
                st++;
                end--;
           }   }
            return 1;
        
    }
    bool isPalindrome(string s) {
        string temp = "";
        for(int j = 0 ; j<s.length() ; j++){
            if(removech(s[j])){
                temp.push_back(s[j]);
            }
        }
        for(int j = 0 ; j<s.length() ; j++){
            temp[j]=tolower(temp[j]);
        }

        return checkPal(temp);

    }
int main(){
    string an;
    cin>>an;
    bool jl = isPalindrome(an);
    cout<<jl;
    return 0;
}
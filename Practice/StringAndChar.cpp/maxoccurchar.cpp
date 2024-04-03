#include<iostream>
#include<string>
using namespace std;

char maxChar(string s ){
    int arr[26]={0};
    int count=0 ;

    for(int i = 0 ; i<s.length() ; i++){
            char ch = s[i];
            if(ch>='a' && ch<='z'){
                    count = ch - 'a';
            }
            else{
                    count = ch-'A';
            }
            arr[count]++;
    }
    int maxi =-1 ; 
    int index =0 ;
    for(int i =0 ; i<26 ; i++){
            if(maxi<arr[i]){
                maxi=arr[i];
                index=i;
            }
    }
        char finalans = 'a'+index;
        return finalans;

}
int main(){
    string s ;
    cin>>s ;
    char maxocc= maxChar(s);
    cout<<maxocc;
     return 0;
}
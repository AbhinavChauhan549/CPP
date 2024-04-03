#include<iostream>
using namespace std;

void Reverse(string &s , int a , int b ){
    int i= a , j=b;

    if(i>=j){
        return ;

    }

    swap(s[i],s[j]);
    i++;
    j--;
    Reverse(s, i , j);
}
int main(){
    string s ;
    cin>>s;
    int a = s.length();
    Reverse(s,0,a-1);
    cout<<s;
     return 0;
}
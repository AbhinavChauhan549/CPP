#include<iostream>
#include<vector>
using namespace std;
 int compress(vector<char>& chars) {

        // We will use one pointer to access every element 

        int i = 0 ;
        int ans = 0 ; 
        int n = chars.size();

        while(i<n){

            // Yaha par hum y se check karege ki har ek element
            int y = i+1;

            while(y<n && chars[i]==chars[y]){
                y++;
                // ye tab tak chalega jab i index wali value or j index wali value same hai or j pointer ko jaha tak same element repeat hora waha tak le jayege
            }
                chars[ans]=chars[i];
                ans++;

                int count= y-i;//yaha se hame element ka maximum count pata lag jayega

                if(count>1){
                    string st = to_string(count);
                    for(char ch : st){
                        chars[ans]=ch;
                        ans++;
                    }
                }

                i=y;
        }
        
   return ans; }
int main(){
    vector<char> an ; 

    an.push_back("a");
    an.push_back("a");
    an.push_back("b");
    an.push_back("b");
    an.push_back("c");
    an.push_back("c");
    an.push_back("c");

    vector<char>result= compress(&an);
     return 0;
}
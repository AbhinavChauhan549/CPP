
// Redundant Brackets

/*

#include <bits/stdc++.h>
bool findRedundantBrackets(string &s)
{

    stack<int> st;



    for(int i=0; i<s.size(); i++){

        if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){

            st.push(s[i]);

        }

        else if(s[i]==')'){

            if(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/'){

                while(st.top()!='('){

                    st.pop();

                }

                st.pop();

            }

            else{

                return true;

            }

        }

    }

    if(st.size()==0){

        return false;

    }

    else {

        for(int i=0;i<st.size();i++){

            if(st.top()=='('){

                return true;

            }

            st.pop();

        }

    }
}

*/
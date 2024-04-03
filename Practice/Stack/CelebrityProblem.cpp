// GFG Problem : ek 2 array given hota hai jisme har element ek ko jante hai lekin vo element kisi ko nahi janta

/*
 bool know(vector<vector<int> >& M, int a, int b, int n) {
        if(M[a][b]==1) {
            return true;
        }
        return false;
    }
    int celebrity(vector<vector<int> >& M, int n) 
    {
       stack<int>st;
       for(int i=0;i<n;i++) {
           st.push(i);
       }
       while(st.size()>1) {  // is loop se bas ek element bachega stack me
           int a = st.top();
           st.pop();
           int b = st.top();
           st.pop();
           if(know(M,a,b,n)) {
               st.push(b);
           }
           else {
               st.push(a);
           }
       }
       int candidate = st.top();
       int zeroCount=0;
       for(int i=0;i<n;i++) {
           if(M[candidate][i]==0) {
               zeroCount++;
           }
       }
       int oneCount=0;
       for(int i=0;i<n;i++) {
           if(M[i][candidate]==1) {
               oneCount++;
           }
       }
       if(zeroCount==n && oneCount==n-1) {
           return candidate;
       }
       return -1;
    }
*/
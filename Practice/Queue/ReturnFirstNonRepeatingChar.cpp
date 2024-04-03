// GFG

/*
      string FirstNonRepeating(string A){
        // Code here

        // characters ke count ke liye hum ek data structure map ko use karege
        unordered_map<char,int> count;
        queue <int> q;
        string ans="";



        for(int i =0 ; i<A.length() ; i++){

            char ch = A[i];

            count[ch]++;

            q.push(ch);


            while(!q.empty()){
                if(count[q.front()] >1){
                    // Repeating char hai to pop kar dege
                    q.pop();
                }
                else{
                    // non repeating character hai to ans string me add kar dege
                    ans.push_back(q.front());
                    break;
                }
            }

            if(q.empty()){
                ans.push_back('#');
            }


        }
          return ans;
    }

*/
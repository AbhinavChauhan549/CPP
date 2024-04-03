// GFG

/*

class Solution
{
    public:

    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        // step 1 : fetch first k elements from queue and put them in stack

        stack<int> s;
        for(int i=0 ; i<k ; i++){
            int element = q.front();
            q.pop();
            s.push(element);

        }

        // step 2 : fetch all elements from stack and put them back in queue

        while(!s.empty()){
            int element = s.top();
            s.pop();
            q.push(element);
        }

        // step 3 : now reverse the n-k elements of the queue

        int t = q.size()-k;

        while(t--){
            int val = q.front();
            q.pop();
            q.push(val);
        }
        return q;
    }
};
*/
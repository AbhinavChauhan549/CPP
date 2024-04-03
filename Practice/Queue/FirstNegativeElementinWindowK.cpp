// GFG
/*

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {


    deque<long long int> dq;
    vector<long long int> ans;
    // first window size K ke liye check karege negative element
    for(int i=0 ; i<K ; i++){
        if(A[i]<0){
            dq.push_back(i);
        }
    }
    if(dq.size()>0){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    // ab is iske baad check karege baaki ke liye

    for (int i=K ; i<N ; i++){
        // removal ke liye check karege

        if(!dq.empty() && i-dq.front() >= K){
            dq.pop_front();
        }

        // ab naya element add karne ke liye dekhege

        if(A[i]<0){
            dq.push_back(i);
        }
        // ab ans store kara lege
        if(dq.size()>0){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }

    }

    return ans ;

 }

*/
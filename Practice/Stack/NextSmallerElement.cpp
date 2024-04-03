/*
Isme hame ek array given hoga jisme hame ek element se next smaller element batana hai or agar nhi hai to -1 denote karna hai vaha pe
*/
/*

Coding Ninjas : Next Smaller Element 

#include<bits/stdc++.h>

vector<int> nextSmallerElement(vector<int> &arr, int n)

{

    stack <int>s;

    s.push(-1);

    vector<int>ans(n);

    for(int i = n-1; i>=0; i--)

    {

        while(s.top() >=arr[i])

        {

            s.pop();

        }

        ans[i] = s.top();

        s.push(arr[i]);

    }

    return ans;

}


previous wala b same hai bus loop reverse ho jayegi
*/
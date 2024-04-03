#include <iostream>
#include <set>
using namespace std;
int main()
{
    int a[] = {2, 3, 5, 6, 8, 9, 7};
    int n = 7;
    int b[] = {1, 2, 4, 8, 6};
    int m = 5;
    // Set in CPP ek STL hai jisme duplicate values nahi hoti or iske andar values ek particular order me hi hogi ya to ascending ya fir descending
    int c = 0;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    cout << "Union of Arrays is : " << s.size() << endl;
    return 0;
}
// Code Studio
/*
#include<bits/stdc++.h>

vector < int > sortedArray(vector < int > a, vector < int > b) {

    int n=a.size();
    int m=b.size();
   set <int> s;
vector<int> ans;
   for(int i =0 ; i<n ;i++){
       s.insert(a[i]);
   }
   for(int i=0 ; i<m ;i++){
       s.insert(b[i]);
   }
 yaha pe hum assign function bhi use kar sakte hai: ans.assign(s.begin(),s.end());
 or copy fuction : copy(s.begin(), s.end(), ans.begin());
   for (auto& it : s) {
        ans.push_back(it);
    }

   return ans;
}
*/
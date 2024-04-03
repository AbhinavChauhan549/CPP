// Insertion / Deletion / Searching in hashmap is done in O(1) TC
// There always a single entry for each key : ek key ki hamesha ek hi entry hogi
// new entry is done for every unique key only
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{

  // creation
  unordered_map<string, int> m;

  // insertion

  // 1 : making pairs
  pair<string, int> pair1 = make_pair("abhinav", 3);

  // 2 : pair
  pair<string, int> pair2("chauhan", 2);

  // 3
  m["naam"] = 5;

  // what will happen
  m["naam"] = 6;

  // answer for this would be that it would update the value of naam from 5 to 6

  // Searching in hashmap
  // 1
  cout << m["naam"] << endl;

  // 2
  cout << m.at("naam") << endl;

  // for unknown entry the at function of hashmap will show key not found error
  // cout<<m.at("you")<<endl;
  // and if search by 1 method it will show 0 value as it would create an entry for it as 0
  cout << m["you"] << endl;

  // Size of Hashmap

  cout << m.size();

  // to check presence in hashmap

  cout << m.count["ans"] << endl;
  // if key is not present or does not have any entry in hashmap then it will show 0 as output

  cout << m.count["abhinav"] << endl;
  // and if key is present or have an entry in hashmap then it will show 1 as output

  // Erase in hashmap

  m.erase("chauhan");

  // Method to access all the members of map
  // 1
  for (auto i : m)
  {
    cout << i.first << "  " << i.second << endl;
  }

  // 2 : using iterator
  unordered_map<string, int>::iterator iteratorname = m.begin();

  while (iteratorname != m.end())
  {
    cout << iteratorname->first << "  " << iteratorname->second << endl;
  }

  return 0;
}
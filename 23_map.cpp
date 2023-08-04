#include <bits/stdc++.h>

//?? Most operations in a map is in O(log n)

/*
 * Map is a container that stores data in a key:value pair where each
 * key is unique and sorted while values can be repeating.

 * The keys and values can be containers themselves as well.
 */

using namespace std;
int main() {
  map<int, int> mp1;            //! Declares a map with {int : int} pair
  map<int, pair<int, int>> mp2; //! Declares a map with {int : pair} pair
  map<pair<int, int>, int> mp3; //! Declares a map with {pair : int} pair

  mp1[1] = 2;
  mp1.insert({2, 4});
  mp1.emplace(4, 1);
  cout << "Map mp1 =\n";
  for (auto it : mp1)
    cout << "Key: " << it.first << " Value: " << it.second << endl;

  cout << "\n\nMap mp1 key 2 has value = "
       << mp1[2]; //! Returns the value at key 2

  auto it = mp1.find(4); //! Returns an iterator at address of key 4
  cout << "\n\nMap mp1 key 2 has key = "
       << (*it).first; //! Returns the key at address it
  cout << "\nMap mp1 key 2 has value = "
       << (*it).second; //! Returns the value at address it

  cout << "\n\nmp1.find(5) = "
       << (*mp1.find(8)).second; //! Returns the garbage key at address
                                 //! mp1.end() since key 8 doesn't exist
  cout << "\n\nmp1.find(5) = "
       << (*mp1.find(8))
              .second; //! Returns garbage value since key 8 doesn't exist

  auto it = mp1.lower_bound(2);
  auto it = mp1.upper_bound(2); //! Searches based on key

  /*
   * Rest are same as other containers
   * begin(), end(), rbegin(), rend(), cbegin(), cend(), crbegin(), crend(),
   * clear(), erase(), swap(), size(), empty(), max_size()
   */

  return 0;
}
#include <bits/stdc++.h>

//?? Every operation on a set is O(1) in avg case and O(n) in worst case

/*
 * A set is a tree like container that stores values in sorted order.
 * Every element in a set is unique and it ommits any duplicate entries.
 */

using namespace std;
int main() {
  set<int> st;
  st.insert(1);
  st.insert(4);
  st.emplace(2);
  st.insert(2); //! Will ommit duplicate entries
  cout << "Set after entering 1, 4, 2 and 2 =\n";
  for (auto it : st)
    cout << it << ", "; //! Will always print sorted items

  auto it = st.find(2);  //! Returns an iterator at the address of item 2
  auto it1 = st.find(6); //! When item doesn't exist, eturns the address
                         //! immidiately after the last item, ie. st.end()

  st.erase(it); //! Erases the entry at address it
  set<int> st1 = {1, 2, 3, 4, 5, 6, 7, 8};
  cout << "\n\nInitial set st1 =\n";
  for (auto it : st1)
    cout << it << ", ";
  st1.erase(st1.find(3), st1.find(7)); //! Erases 3, 4, 5 and 6
  cout << "\nSet st1 after erase() =\n";
  for (auto it : st1)
    cout << it << ", ";

  cout << endl
       << endl
       << st1.count(2); //! Returns the number of occurances of an element

  /*
   * All the rest of the functions are the same as other containers
   * begin(), end(), rbegin(), rend(), cbegin(), cend(), crbegin(),
   * crend() clear(), insert(), size(), max_size(), empty(),
   * swap(), front(), back().
   */
  return 0;
}
#include <bits/stdc++.h>

//?? Every operation on a set is O(logn)

//*It works the same as set except, it can contain repeting values

using namespace std;
int main() {
  multiset<int> st;
  st.insert(1);
  st.insert(4);
  st.insert(4);
  st.emplace(2);
  st.insert(2); //! Will allow multiple occurences of 2
  cout << "Set after entering 1, 4, 2 and 2 =\n";
  for (auto it : st)
    cout << it << ", "; //! Will always print sorted items

  auto it = st.find(
      2); //! Returns an iterator at the address of item 2 (first occurence)

  st.erase(4); //! Erases all occurences of 4 in set
  cout << "\n\nSet after erase(4) =\n";
  for (auto it : st)
    cout << it << ", ";

  st.erase(it); //! Erases the entry at address it
  cout << "\n\nSet after erase(2) first occurence =\n";
  for (auto it : st)
    cout << it << ", ";

  //* rest of the functions are same as set
  return 0;
}
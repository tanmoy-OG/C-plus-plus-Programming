#include <bits/stdc++.h>

using namespace std;
int main() {
  list<int> l = {3, 4, 5, 6, 7, 8};
  cout << "Initial list = " << endl;
  for (int it : l)
    cout << it << ", ";

  l.push_back(9);     //! push_back() pushes an element at the end of the list
  l.emplace_back(10); //! emplace_back() is faster than push_back()
  cout << endl << endl << "List after adding 9 and 10 in the back = " << endl;
  for (int it : l)
    cout << it << ", ";

  l.push_front(2); //! push_front() pushes an element at the begning of the list
  l.emplace_front(1); //! emplace_front() is faster than push_front()
  cout << endl << endl << "List after adding 2 and 1 in the front = " << endl;
  for (int it : l)
    cout << it << ", ";

  //! All the rest of the functions are the same as Vector
  //* begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap(), etc

  return 0;
}
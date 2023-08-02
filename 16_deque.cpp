#include <bits/stdc++.h>

using namespace std;
int main() {
  deque<int> dq = {3, 4, 5, 6, 7, 8};
  cout << "Initial list = " << endl;
  for (int it : dq)
    cout << it << ", ";

  dq.push_back(9);     //! push_back() pushes an element at the end of the list
  dq.emplace_back(10); //! emplace_back() is faster than push_back()
  cout << endl << endl << "List after adding 9 and 10 in the back = " << endl;
  for (int it : dq)
    cout << it << ", ";

  dq.push_front(
      2); //! push_front() pushes an element at the begning of the list
  dq.emplace_front(1); //! emplace_front() is faster than push_front()
  cout << endl << endl << "List after adding 2 and 1 in the front = " << endl;
  for (int it : dq)
    cout << it << ", ";
  dq.pop_back();
  dq.pop_front();
  cout << endl
       << endl
       << "List after popping first and the last element = " << endl;
  for (int it : dq)
    cout << it << ", ";

  cout << endl << endl << "Current front element = " << dq.front();
  cout << endl << "Current back element = " << dq.back();

  //! All the rest of the functions are the same as Vector & List
  //* begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap()

  return 0;
}
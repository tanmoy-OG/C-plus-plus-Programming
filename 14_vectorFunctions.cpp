#include <bits/stdc++.h>

using namespace std;
int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << "Initial Vector = " << endl;
  for (int it : v)
    cout << it << ", ";

  v.erase(v.begin() + 1); //! erase() erases the element from memory address
  cout << endl << endl << "Vector after erasing index 1 = " << endl;
  for (int it : v)
    cout << it << ", ";

  v.erase(v.begin() + 2,
          v.begin() +
              5); //! erase() accepts range of memory address as parameter
  cout << endl << endl << "Vector after erasing index 2 to 4 = " << endl;
  for (int it : v)
    cout << it << ", ";

  v.insert(v.begin() + 1,
           2); //! insert() inserts element 2 at the memory address begin()+1
  cout << endl << endl << "Vector after inserting 2 at index 1 = " << endl;
  for (int it : v)
    cout << it << ", ";

  vector<int> c = {4, 5, 6, 10, 11};
  cout << endl << endl << "Vector c = " << endl;
  for (int it : c)
    cout << it << ", ";

  v.insert(
      v.begin() + 3, c.begin(),
      c.end() -
          2); //! insert() can also add elements of another vector from a range
  cout << endl << "Vector after inserting c[0] to c[2] at index 3 = " << endl;
  for (int it : v)
    cout << it << ", ";

  cout << endl
       << endl
       << "Size of Vector v = "
       << v.size(); //! size() gets the length of a vector

  c.swap(v); //! swap() swaps the values between two vectors
  cout << endl << endl << "Vector c after swap = " << endl;
  for (int it : c)
    cout << it << ", ";
  cout << endl << "Vector v after swap = " << endl;
  for (int it : v)
    cout << it << ", ";

  v.clear(); //! clear() empties a vector of all it's values
  cout << endl << endl << "Vector v after clearing = " << endl;
  for (int it : v)
    cout << it << ", ";
  cout << "Size of vector v = " << v.size();

  cout << endl << endl << "Is vector v empty? = " << v.empty();
  cout << endl
       << "Is vector c empty? = "
       << c.empty(); //! empty() returns 1 if vector is empty otherwise 0

  return 0;
}
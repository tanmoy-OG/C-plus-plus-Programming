#include <bits/stdc++.h>

/*
* Vectors in STL are basically dynamic arrays that have the ability to
* change size whenever elements are added or deleted from them.

* Vector elements can be easily accessed and traversed using iterators.

* A vector stores elements in contiguous memory locations ie. linear order.
*/

using namespace std;
int main() {
  vector<int> v1;
  v1.push_back(2);    //! push_back() pushes an element at the end of the vector
  v1.emplace_back(4); //! emplace_back() is faster than push_back()
  cout << v1[0] << ", " << v1[1] << endl;

  cout << v1.back() << endl; //! back() fetches the endmost element of a vector
  cout << v1.front() << endl
       << endl; //! front() fetches the firstmost element of a vector

  v1.pop_back(); //! pop_vack() deletes the last element and returns it to the
                 //! calling function.

  vector<pair<int, int>> v2;
  v2.push_back({1, 2});
  v2.emplace_back(3, 4); //! emplace_back() automatically recognizes the
                         //! datatype
  cout << v2[0].first << ", " << v2[0].second << endl;
  cout << v2[1].first << ", " << v2[1].second << endl << endl;

  vector<int> v4(5, 100); //! Initializes 5 100s from index 0-4
  vector<int> v5(5); //! Empty declaration of size 5 vector, by default stores 0
                     //! or garbage values

  for (vector<int>::iterator it = v4.begin(); it != v4.end(); it++)
    cout << *(it)
         << ", "; //! iterator stores the memory address of vector elements

  //! begin() returns an iterator pointing to the first element of the vector

  //! end() returns an iterator pointing to the immidiate next address of the
  //! last element.
  cout << endl;
  for (auto it = v4.begin(); it != v4.end(); it++)
    cout << *(it) << ", "; //! auto automatically assigns the appt datatype acc
                           //! to the data
  cout << endl << endl;
  for (int it : v5)
    cout << it << ", "; //! for-each loop

  auto it1 = v1.begin(); //! Address of first element
  auto it2 =
      v1.end(); //! Address of the immidiate next element of the last element
  auto it3 = v1.rbegin(); //! Address of the last element
  auto it4 =
      v1.rend(); //! Address of the element immidiately before the first element

  //* cbegin(), cend(), crbegin(), crend(), returns a reference to the
  //* elements at begin(), end(), rbegin(), rend()

  return 0;
}
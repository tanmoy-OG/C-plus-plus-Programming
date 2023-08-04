#include <bits/stdc++.h>

/*
?? Time complexity of sort() is O(n log n)
*/
/*
  * Sort() is one of the quickest algorithm STL provides us, it is also easy to
  implement.
  * It uses a combination of quicosort and mergesort in it's initial
  implementation.

  * In STL, next_permutation() is a built-in function which as the name suggests
  returns
  * the next lexicographically greater permutation of the elements in the
  container passed
  * to it as an argument.
  * It returns true if a next lexicographically greater permutation is possible,
  otherwise,
  * it returns false.
*/

using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second < p2.second)
    return true;
  if (p1.second > p2.second)
    return false;

  // if p1.first == p2.first
  if (p1.first > p2.first)
    return true;
  return false;
}

int main() {

  int a[] = {2, 5, 3, 1, 8};
  cout << "Initial Array = ";
  for (auto it : a)
    cout << it << ", ";
  sort(a, a + 5); //! Sorts array from the begning iterator to begning+n-1
  cout << "\nSorted Array = ";
  for (auto it : a)
    cout << it << ", ";
  sort(a, a + 5, greater<int>());
  cout << "\nReverse sorted Array = ";
  for (auto it : a)
    cout << it << ", ";

  vector<int> v = {2, 5, 3, 1, 8};
  cout << "\n\nInitial Vector = ";
  for (auto it : v)
    cout << it << ", ";
  sort(v.begin(), v.end()); //! Sorts vector from begning to end-1
  cout << "\nSorted Vector = ";
  for (auto it : v)
    cout << it << ", ";

  pair<int, int> p[] = {{1, 2}, {2, 1}, {4, 1}};
  cout << "\n\nInitial Pair = ";
  for (auto it : p)
    cout << "{" << it.first << ", " << it.second << "}, ";
  sort(p, p + 3, comp);
  /*
  ! Custom sort, ascending order in terms of second element.
  ! If second element is equal then sort in descending order
  ! in terms of the first elements.
  */
  cout << "\nSorted Pair = ";
  for (auto it : p)
    cout << "{" << it.first << ", " << it.second << "}, ";

  int num = 7;
  int cnt = __builtin_popcount(
      num); //! Returns the number of set bits(1) of the binary of an integer
  long long n = 1657865786867;
  int c = __builtin_popcountll(
      n); //! Returns the number of set bits(1) of the binary of an long long
  cout << "\n\nnum = " << num;
  cout << "\n__builtin_popcount(num) = " << cnt;
  cout << "\n\nn = " << n;
  cout << "\n__builtin_popcountll(n) = " << c;

  string s = "123";
  cout << "\n\nInitial string = " << s << endl << endl << "Permutation:\n";
  do {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));
  //! Returns true if a next permutation is possible, subsequently also changing
  //! the string, Otherwise returns false

  s = "231";
  cout << "\n\nInitial string = " << s << endl << endl << "Permutation:\n";
  do {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));
  //! Returns only 3 permutations because only 3 came next according to
  //! dictionary order

  cout << "\n\nMin element of array = " << *min_element(a, a + 5);
  //! Returns the address of the minimum element within the array
  cout << "\nMax element of array = " << *max_element(a, a + 5);
  //! Returns the address of the maximum element within the array

  return 0;
}
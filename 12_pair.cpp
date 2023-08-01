#include <bits/stdc++.h>

using namespace std;
int main() {
  pair<int, int> p1 = {2, 4};
  cout << p1.first << ", " << p1.second << endl << endl;

  pair<int, char> p2 = {2,
                        'b'}; //! Pairs can be composed of different datatypes
  cout << p2.first << ", " << p2.second << endl << endl;

  pair<pair<int, int>, char> p3 = {{2, 4}, 'b'}; //! Pairs can nested
  cout << p3.first.first << ", " << p3.first.second << ", " << p3.second << endl
       << endl;

  pair<int, int> arr[] = {
      {1, 2}, {2, 5}, {5, 1}}; //! We can have Array of Pairs
  cout << arr[1].second;
  return 0;
}
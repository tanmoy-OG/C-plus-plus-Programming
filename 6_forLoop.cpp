#include <bits/stdc++.h>

using namespace std;
int main() {
  int i;
  for (i = 1; i <= 5; i++) {
    cout << "Striver " << i << endl;
  }
  cout << endl
       << i << endl
       << endl; //! Can print i because it is initialised outside the scope
                //! of for() and prints 6 because i breaks out of for()
                //! when i > 5 ie. 6

  for (i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++)
      cout << j;
    cout << endl;
  } //! Nested for()
  return 0;
}
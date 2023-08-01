#include <bits/stdc++.h>

using namespace std;
int main() {
  int i = 1, j;
  while (i <= 5) {
    cout << "Striver " << i << endl;
    i++;
  }
  cout << endl
       << i << endl
       << endl; //! Can print i because it is initialised outside the scope
                //! of while() and prints 6 because i breaks out of for()
                //! when i > 5 ie. 6

  i = 1;
  while (i <= 5) {
    j = 1;
    while (j <= i) {
      cout << j;
      j++;
    }
    cout << endl;
    i++;
  } //! Nested while()
  return 0;
}
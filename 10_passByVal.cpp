#include <bits/stdc++.h>

using namespace std;
void swap(int &a, int &b) {
  int c = a;
  a = b;
  b = c;
  cout << "Inside swap() a = " << a << endl;
  cout << "Inside swap() b = " << b << endl;
}

int main() {
  int a = 2, b = 4;
  cout << "Initial value of a = " << a << endl;
  cout << "Initial value of b = " << b << endl;
  cout << endl;

  swap(a, b);
  cout << endl;

  cout << "Inside main() a = " << a << endl;
  cout
      << "Inside main() b = " << b
      << endl; //! Values got modified because the actual memory address of the
               //! variables were passed to swap(), and any modifications made
               //! within swap() got reflected on the variables that were passed
  cout << endl;

  return 0;
}
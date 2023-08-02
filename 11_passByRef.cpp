#include <bits/stdc++.h>

using namespace std;
void swap(int a, int b) {
  int c = a;
  a = b;
  b = c;
  cout << "Inside swap() a = " << a << endl;
  cout << "Inside swap() b = " << b << endl;
}

void mod(int arr[]) { arr[4] = 10; }

int main() {
  int a = 2, b = 4;
  cout << "Initial value of a = " << a << endl;
  cout << "Initial value of b = " << b << endl;
  cout << endl;

  swap(a, b);
  cout << endl;

  cout << "Inside main() a = " << a << endl;
  cout << "Inside main() b = " << b
       << endl; //! Values didn't get because the actual values weren't passed
                //! to swap(), instead a copy of the values got passed
  cout << endl;

  int arr[5] = {1, 2, 3, 4, 5};
  cout << "Initial array = ";
  for (int i = 0; i < 5; i++)
    cout << arr[i] << ", ";
  cout << endl;
  mod(arr);
  cout << "Modified array = ";
  for (int i = 0; i < 5; i++)
    cout << arr[i] << ", "; //! Array got modified despite passing by value
                            //! because Arrays always get passed by reference
  return 0;
}
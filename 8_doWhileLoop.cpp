#include <bits/stdc++.h>

using namespace std;
int main() {
  int i = 6, j;
  do {
    cout << "Striver " << i
         << endl; //! Prints because doWhile() executes atleast once regardless
                  //! if the condition met or not
    i++;
  } while (i <= 5);
  cout
      << endl
      << i << endl
      << endl; //! Prints 7 because i was initialized 6 and doWhile() ran once
               //! since the condition i <= 5 stopped it from executing further,
               //! and i++ inside the loop increased the value from 6 to 7

  return 0;
}
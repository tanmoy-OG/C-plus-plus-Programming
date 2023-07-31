#include <bits/stdc++.h>

using namespace std;
int main() {
  int ch;

  cin >> ch;

  switch (ch) {
  case 1:
    cout << "Monday";
  case 2:
    cout << "Tuesday";
  case 3:
    cout << "Wednesday";
  case 4:
    cout << "Thurseday";
  case 5:
    cout << "Friday";
  case 6:
    cout << "Saturday";
  case 7:
    cout << "Sunday";
  default:
    cout << "Invalid Choice!!";
  } //! Prints all the cases cus no break statement used

  cout << endl << endl;
  switch (ch) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thurseday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  default:
    cout << "Invalid Choice!!";
  }
  return 0;
}
#include <bits/stdc++.h>
/*
 *Functions are a complete block of code that performs something
 *Functions are used to modularize code and make it look clean
 *Functions are used to increase readability by using proper naming conventions
 *Functions are used when same block of code are used many times (Reusability)
 */

using namespace std;
void printName() {
  cout << "Striver\n\n";
} //! Unparameterised void function doesn't accepts or return any value

void printInputName(string name) {
  cout << "Hey " << name << endl;
} //! Parameterised void function accepts values but doesn't return any value

int sum(int x, int y) {
  return (x + y);
} //! Parameterised return type function both accepts and returns value

int main() {
  printName(); //! No value returned

  string name1, name2, name3;
  cin >> name1 >> name2 >> name3;
  printInputName(name1); //! No value returned
  printInputName(name2);
  printInputName(name3); //! Function Reusability

  int a, b, s;
  cin >> a >> b;
  s = sum(a, b); //! Returns value to s
  cout << endl << s;

  return 0;
}
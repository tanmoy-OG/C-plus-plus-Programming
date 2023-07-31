#include <bits/stdc++.h>

using namespace std;
int main() {
  int age;

  cin >> age;

  if (age < 18)
    cout << "Lol!! u a kid!!";
  else if (age > 60)
    cout << "Retired!! have a good day Gramps!!";
  else {
    if (age < 22) //! Nested If Else
      cout << "Still in College!!";
    else
      cout << "U are HIRED!! Welcome to the company!!";
  }
  return 0;
}
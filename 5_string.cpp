#include <bits/stdc++.h>

using namespace std;
int main() {
  string s = "striver";
  
  int len = s.size();
  cout << s[len-1] << endl; //! Prints last character
  cout << s << endl;

  s[len-1] = 'z'; //! Changes the character in the last pos

  cout << s;

  return 0;
}
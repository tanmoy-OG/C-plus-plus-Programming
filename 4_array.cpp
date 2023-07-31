#include <bits/stdc++.h>

using namespace std;
int main() {
  int arr1[5];

  cin >> arr1[0] >> arr1[1] >> arr1[2] >> arr1[3] >> arr1[4];

  cout << arr1[0] << arr1[1] << arr1[2] << arr1[3] << arr1[4] << endl;

  int arr2[2][3];
  cout << arr2[1][1]
       << endl; //! prints garbage value cus it's not initialised yet

  cin >> arr2[0][0] >> arr2[0][1] >> arr2[0][2] >> arr2[1][0] >> arr2[1][1] >>
      arr2[1][2];

  cout << arr2[1][1];
  return 0;
}
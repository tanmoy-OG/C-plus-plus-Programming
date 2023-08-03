#include <bits/stdc++.h>

/*
?? Time complexity for push() and pop() for a heap is O(log n)
?? For top() it is O(1)
*/

/*
* A heap is a tree data structure which is similar to a stack but, here
* the maximum or minimum element stays at the top.

* For a max-heap,
* If it is an integer, then maximum value will be at the top.
* If it is a string then lexicographically the maximum string will be top.

* The minimum value element is stored at the top for a min-heap

* We can only access the topmost element of a heap.
*/

using namespace std;
int main() {
  priority_queue<int> pq;
  pq.push(30);
  pq.push(10); 
  pq.emplace(20); //! push() and emplace() inserts the value in the heap

  cout << "Top of pq = " << pq.top(); //! top() returns the maximum item

  pq.pop(); //! pop() removes the topmost element
  cout << endl << endl << "Top of pq after pop() = " << pq.top();

  priority_queue<int, vector<int>, greater<int>>
      rpq; //! Declaration of a min-heap
  rpq.push(5);
  rpq.push(2);
  rpq.push(8);
  rpq.emplace(10);
  cout << endl
       << endl
       << "Top of rpq after pop() = "
       << rpq.top(); //! Returns minimum value for min-heap

  //* size() and empty() works the same as stack and queue

  return 0;
}
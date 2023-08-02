#include <bits/stdc++.h>

/*
* A queue is a data structure that follows the FIFO (First In First Out)
* process, ie. The first element inserted will be the first to remove

* A good example would be counter waiting queue, the first person who
* gets in the line is the first to get out.

* We can only access the firstmost and lastmost elements of a queue

! Each operations performed in a queue takes time complexity O(1).
*/

using namespace std;
int main() {
  queue<int> q;
  q.push(10);
  q.push(20);
  q.emplace(30); //! push() inserts the value at the end of the queue

  cout << "End of queue = " << q.back(); //! back() returns the endmost item
  cout << "\nFront of queue = "
       << q.front(); //! front() returns the firstmost item

  q.back() += 20; //! Adds 20 to the last value of the queue
  cout << "\n\nEnd of queue after adding 20 = " << q.back();

  q.pop(); //! pop() removes the firstmost element
  cout << endl << endl << "Front of queue after pop() = " << q.front();

  //* size(), swap(), empty() works the same as stack

  return 0;
}
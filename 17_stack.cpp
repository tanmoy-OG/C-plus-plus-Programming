#include <bits/stdc++.h>

/*
?? Time complexity of all stack operations. ie. push(), pop(), top() are of O(1)
*/

/*
* A stack is a  linear data structure that follows the LIFO (Last In First Out)
* process, ie. The last element inserted will be the first to remove.

* A good example would be a pile of books, we place a book on the top and
* we take off books one by one from the top too.

* We can only access the topmost element of a stack.
*/

using namespace std;
int main() {
  stack<int> st;
  st.push(10);
  st.push(20);
  st.emplace(30); //! push() and emplace() inserts the value on top of the stack

  cout << "Top of stack = " << st.top();

  st.pop(); //! pop() removes the topmost element
  cout << endl << endl << "Top of stack after pop() = " << st.top();
  //! top() returns the topmost element of the stack

  cout << endl
       << endl
       << "Size of stack now = "
       << st.size(); //! size() returns the total elements in a stack

  stack<int> st1;

  cout << endl << endl << "Is stack st empty? = " << st.empty();
  cout
      << endl
      << "Is stack st1 empty? = "
      << st1.empty(); //! empty() works the same for stack as vectors and others

  st.swap(st1); //! swap() swaps the values of two stacks
  cout << "\n\nAfter swap(),\n";
  cout << "Is stack st empty? = " << st.empty();
  cout << endl << "Is stack st1 empty? = " << st1.empty();

  return 0;
}
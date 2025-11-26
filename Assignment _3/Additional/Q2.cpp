// Design a stack that supports getMin() in O(1) time and O(1) extra space.

// Time Complexity: O(1) for push, pop, top, getMin
// Space Complexity: O(1) extra space

#include <iostream>
#include <stack>
using namespace std;

class SpecialStack
{
  stack<long long> st;
  long long minElement;

public:
  void push(int x)
  {
    if (st.empty())
    {
      st.push(x);
      minElement = x;
    }
    else
    {
      if (x >= minElement)
      {
        st.push(x);
      }
      else
      {
        st.push(2LL * x - minElement);
        minElement = x;
      }
    }
  }

  void pop()
  {
    if (st.empty())
    {
      cout << "Stack is Empty\n";
      return;
    }
    long long topVal = st.top();
    st.pop();
    if (topVal < minElement)
    {
      minElement = 2LL * minElement - topVal;
    }
  }

  int top()
  {
    if (st.empty())
    {
      cout << "Stack is Empty\n";
      return -1;
    }
    long long topVal = st.top();
    if (topVal >= minElement)
      return topVal;
    else
      return minElement;
  }

  int getMin()
  {
    if (st.empty())
    {
      cout << "Stack is Empty\n";
      return -1;
    }
    return minElement;
  }

  bool empty()
  {
    return st.empty();
  }
};

int main()
{
  SpecialStack s;
  s.push(5);
  s.push(3);
  s.push(7);
  s.push(2);

  cout << "Current Min: " << s.getMin() << endl;
  s.pop();
  cout << "Current Min: " << s.getMin() << endl;
  s.pop();
  cout << "Top: " << s.top() << endl;
  cout << "Current Min: " << s.getMin() << endl;

  return 0;
}

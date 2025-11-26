// You have an array A of integers of size N, an array B (initially empty) and a stack S (initially
// empty). You are allowed to do the following operations:
// a) Take the first element of array A and push it into S and remove it from A.
// b) Take the top element from stack S, append it to the end of array B and remove it from S.
// You have to tell if it possible to move all the elements of array A to array B using the above
// operations such that finally the array B is sorted in ascending order.

// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool isPossible(vector<int> &A)
{
  int n = A.size();
  stack<int> st;
  vector<int> B;
  int expected = 1;

  for (int i = 0; i < n; i++)
  {
    st.push(A[i]);

    while (!st.empty() && st.top() == expected)
    {
      B.push_back(st.top());
      st.pop();
      expected++;
    }
  }

  while (!st.empty() && st.top() == expected)
  {
    B.push_back(st.top());
    st.pop();
    expected++;
  }

  return (B.size() == n);
}

int main()
{
  int n;
  cout << "Enter size of array A: ";
  cin >> n;

  vector<int> A(n);
  cout << "Enter elements of A: ";
  for (int i = 0; i < n; i++)
    cin >> A[i];

  if (isPossible(A))
    cout << "Yes, possible\n";
  else
    cout << "No, not possible\n";

  return 0;
}

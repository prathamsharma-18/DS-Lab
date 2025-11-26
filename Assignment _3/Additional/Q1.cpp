// Given an array A, find the nearest smaller element for every element A[i] in the array such that the
// element has an index smaller than i.
// Time Complexity: O(n)
// Space Complexity: O(n)


#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nearestSmallerToLeft(vector<int> &A)
{
  stack<int> st;
  vector<int> ans;

  for (int i = 0; i < A.size(); i++)
  {
    while (!st.empty() && st.top() >= A[i])
    {
      st.pop();
    }
    if (st.empty())
      ans.push_back(-1);
    else
      ans.push_back(st.top());

    st.push(A[i]);
  }
  return ans;
}

int main()
{
  int n;
  cout << "Enter size of array: ";
  cin >> n;

  vector<int> A(n);
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
    cin >> A[i];

  vector<int> result = nearestSmallerToLeft(A);

  cout << "Nearest Smaller Elements: ";
  for (int x : result)
    cout << x << " ";
  cout << endl;

  return 0;
}

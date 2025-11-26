
// Given an array arr[ ] of integers, the task is to find the Next Greater Element for each element of the
// array in order of their appearance in the array. Note: The Next Greater Element for an element x is
// the first greater element on the right side of x in the array. Elements for which no greater element
// exist, consider the next greater element as -1.

// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextGreaterElements(vector<int> &arr)
{
  int n = arr.size();
  vector<int> nge(n, -1);
  stack<int> st;

  for (int i = n - 1; i >= 0; i--)
  {
    while (!st.empty() && st.top() <= arr[i])
    {
      st.pop();
    }
    if (!st.empty())
      nge[i] = st.top();
    st.push(arr[i]);
  }
  return nge;
}

int main()
{
  int n;
  cout << "Enter size of array: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  vector<int> result = nextGreaterElements(arr);

  cout << "Next Greater Elements: ";
  for (int x : result)
    cout << x << " ";
  cout << endl;

  return 0;
}

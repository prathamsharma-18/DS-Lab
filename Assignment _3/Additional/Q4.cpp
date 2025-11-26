// Given an array of integers temperatures represents the daily temperatures, return an
// array answer such that answer[i] is the number of days you have to wait after the ith day to get a
// warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.

// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> dailyTemperatures(vector<int> &temperatures)
{
  int n = temperatures.size();
  vector<int> ans(n, 0);
  stack<int> st; // stores indices

  for (int i = 0; i < n; i++)
  {
    while (!st.empty() && temperatures[i] > temperatures[st.top()])
    {
      int idx = st.top();
      st.pop();
      ans[idx] = i - idx;
    }
    st.push(i);
  }
  return ans;
}

int main()
{
  int n;
  cout << "Enter number of days: ";
  cin >> n;

  vector<int> temperatures(n);
  cout << "Enter temperatures: ";
  for (int i = 0; i < n; i++)
    cin >> temperatures[i];

  vector<int> result = dailyTemperatures(temperatures);

  cout << "Answer: ";
  for (int x : result)
    cout << x << " ";
  cout << endl;

  return 0;
}

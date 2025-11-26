// Given an array arr[] and a positive integer k, the task is to count all pairs
// (i, j) such that i < j and absolute value of (arr[i] - arr[j]) is equal to k.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

  vector<int> arr = {1, 4, 1, 4, 5};
  int k = 3;
  int count = 0;
  sort(arr.begin(), arr.end());

  int i = 0, j = 0;
  int n = arr.size();

  while (j < n)
  {

    if (arr[j] - arr[i] < k)
      j++;
    else if (arr[j] - arr[i] > k)
      i++;
    else if (arr[j] - arr[i] == k)
    {
      int el1 = arr[i];
      int el2 = arr[j];
      int count1 = 0;
      int count2 = 0;
      while (j < n && arr[j] == el2)
      {
        count1++;
        j++;
      }
      while (i < n && arr[i] == el1)
      {
        count2++;
        i++;
      }
      if (el1 == el2)
      {
        count += ((count1) * (count1 - 1)) / 2;
      }
      else
        count += count1 * count2;
    }
  }
  cout << " No. of pairs: " << count;

  return 0;
}

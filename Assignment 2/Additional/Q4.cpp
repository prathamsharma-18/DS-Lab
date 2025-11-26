// Sort an array of 0s, 1s and 2s - Dutch National Flag Problem
// Given an array arr[] consisting of only 0s, 1s, and 2s. The objective is to sort the array, i.e.,
// put all 0s first, then all 1s and all 2s in last. Dutch Flag Algorithm.
#include <iostream>
using namespace std;
void sort(vector<int> &arr)
{
  int size = arr.size();

  int low = 0;
  int mid = 0;
  int high = size - 1;

  while (mid <= high)
  {

    if (arr[mid] == 0)
    {
      swap(arr[low], arr[mid]);
      low++;
      mid++;
    }
    else if (arr[mid] == 1)
      mid++;

    else
    {
      swap(arr[mid], arr[high]);
      high--;
    }
  }
}
int main()
{
  vector<int> arr = {1, 0, 2, 0, 0, 1, 2};

  sort(arr);

  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}

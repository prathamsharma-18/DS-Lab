// Given a fixed-length integer array arr, duplicate each occurrence of two (2), shifting the
// remaining elements to the right.
#include <iostream>
using namespace std;

int main()
{
  vector<int> arr = {1, 2, 0, 3, 2, 4, 5, 2};

  /* for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] == 2 )
      {

        for (int j =arr.size()-1; j > i+1; j--)
        {
            arr[j]=arr[j-1];
        }
        arr[i+1]=2;
       i++;
      }

    }
    for(int i=0;i<arr.size();i++){
      cout << arr[i] <<" ";
    }
      */

  int count = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == 2)
      count++;
  }
  int n = arr.size();
  int i = arr.size() - 1;
  int j = arr.size() + count - 1;
  while (i < j)
  {
    if (arr[i] == 2)
    {
      if (j < n)
        arr[j] = 2; // duplicates
      j--;
      if (j < n)
        arr[j] = 2; // original
      j--;
    }
    else
    {
      if (j < n)
        arr[j] = arr[i];
      j--;
    }
    i--;
  }

  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}

// Design the logic to remove the duplicate elements from an Array and after the 
// deletion the array should containtheunique elements.
#include <iostream>
using namespace std;

int main()
{
  int arr[100], n;
  cout << "Enter number of elements: ";
  cin >> n;

  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  // Outer loop picks an element
  for (int i = 0; i < n; i++)
  {
    // Inner loop checks for duplicates ahead
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        // Shift elements left
        for (int k = j; k < n - 1; k++)
          arr[k] = arr[k + 1];
        n--; // Decrease size
        j--; // Stay at same j to check new element
      }
    }
  }

  cout << "Array after removing duplicates: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;

  return 0;
}

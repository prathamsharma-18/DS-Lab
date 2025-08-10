// Reverse the elements of an array
#include <iostream>
using namespace std;

int main()
{

  int n, i;
  cout << "enter the size of array:";
  cin >> n;

  int arr[n];
  for (i = 0; i < n; i++)
  {
    cout << "enter element " << i + 1 << ":";
    cin >> arr[i];
  }

  cout << ":::::reversing the array::::";

  for (i = 0; i < (n / 2); i++)
  {
    int temp = 0;
    temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }

  cout << "the elements of array are:";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}

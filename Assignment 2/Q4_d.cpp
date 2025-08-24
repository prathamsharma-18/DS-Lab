// Write a program to sort the strings in alphabetical order.
#include <iostream>
using namespace std;

int main()
{
  string str;
  getline(cin, str);

  int n = str.length();

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (str[j] > str[j + 1])
      {
        swap(str[i], str[j]);
      }
    }
  }

  cout << str;

  return 0;
}
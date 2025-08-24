// Write a program to convert a character from uppercase to lowercase.
#include <iostream>
using namespace std;

int main()
{
  string str;
  getline(cin, str);

  int n = str.length();
  bool flag = true;
  for (int i = 0; i < n; i++)
  {
    if (str[i] >= 65 && str[i] < 91)
    {
      str[i] = str[i] + 32;
      flag = false;
    }
  }
  if (flag)
    cout << "No uppercase found.";
  else
    cout << str;

  return 0;
}
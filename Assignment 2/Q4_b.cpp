// Write a program to reverse a string.
#include <iostream>
using namespace std;

int main()
{
  string str;
  cout<<"enter the string:";
  getline(cin, str);

  for (int i = 0; i < str.size() / 2; i++)
  {
    char temp;
    temp = str[i];
    str[i] = str[str.size() - i - 1];
    str[str.size() - i - 1] = temp;
  }

  cout << str;
  return 0;

}

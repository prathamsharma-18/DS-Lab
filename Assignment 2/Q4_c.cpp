// Write a program to delete all the vowels from the string.
#include <iostream>
using namespace std;

bool isVowel(char c)
{
  c = tolower(c);
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int main()
{
  string str;
  getline(cin, str);

  string result = "";

  for (char ch : str)
  {
    if (!isVowel(ch))
    {
      result = result + ch;
    }
  }

  cout << result;
  return 0;
}
// String Anagrams
// Given two strings str1 and str2, determine if they form an anagram pair.
// Note: Two strings are considered anagrams if one string can be rearranged to form the other string.
#include <iostream>
using namespace std;

int main()
{
  string str1, str2;
  cin >> str1 >> str2;

  if (str1.length() != str2.length())
    cout << "NO";

  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());

  if (str1 == str2)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}

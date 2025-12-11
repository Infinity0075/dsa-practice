#include <iostream>
#include <string>
using namespace std;

string reverseLetter(string s)
{
      int i = 0;
      int j = s.size() - 1;
      while (i < j)
      {
            if (isalpha(s[j]) && isalpha(s[i]))
            {
                  swap(s[j], s[i]);
                  i++;
                  j--;
            }
            else if (!isalpha(s[i]))
            {
                  i++;
            }
            else
            {
                  j--;
            }
      }
      return s;
}

bool isVovel(char ch)
{
      ch = tolower(ch);
      return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

string reverseVovel(string s)
{
      int i = 0;
      int j = s.size() - 1;

      while (i < j)
      {
            if (isVovel(s[i]) && isVovel(s[j]))
            {
                  swap(s[i], s[j]);
                  i++;
                  j--;
            }
            else if (!isVovel(s[i]))
            {
                  i++;
            }
            else
            {
                  j--;
            }
      }
      return s;
}

int main()
{
      string s;
      cout << "Give the string:-" << endl;
      getline(cin, s);

      // leetcode Reverse only letters:

      // cout << "The reverse string is:" << endl;
      // cout << reverseLetter(s);

      // same type question vovels swapping

      cout << "The after swaping Vovels the str is: " << endl;
      cout << reverseVovel(s);
}
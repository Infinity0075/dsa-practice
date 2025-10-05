#include <iostream>
#include <string>

using namespace std;

void reverseChar(char an[], int size)
{
      int i = 0;
      int j = size - 1;

      while (i <= j)
      {
            swap(an[i], an[j]);
            i++;
            j--;
      }
}

void convertToUpperCase(char an[], int n)
{
      int i = 0;

      while (an[i] != '\0')
      {
            char curChar = an[i];
            // check if lower case
            if (curChar >= 'a' && curChar <= 'z')
            {
                  an[i] = curChar - 'a' + 'A';
            }
            i++;
      }
}
void replaceChar(char an[], int n)
{
      int i = 0;

      while (an[i] != '\0')
      {
            if (an[i] == '@')
            {
                  // insert space:
                  an[i] = ' ';
            }
            else
            {
                  i++;
            }
      }
}

bool checkPalindrome(char an[], int n)
{
      // n = length of char array an;
      int i = 0;
      int j = n - 1;
      while (i > j)
      {
            if (an[i] == an[j])
            {
                  i++;
                  j--;
            }
            else
            {
                  return false;
            }
      }
      // agar yha tak pahuch gaye h toh iska matalab ki string pallindrome h kuki sare test case check ho gye honge...so just return true;;
      return true;
}

string longestPalandromic(string s, int n)
{
      int i = 0;
      int j = s.length() - 1;

      while (i <= j)
      {
            if (s[i] == s[j])
            {
                  i++;
                  j--;
            }
      }
}

int main()
{

      char an[100];

      cout << "Input the array :-  " << endl;
      // cin >> an;

      // cout << "Before :- " << an << endl;

      int len = strlen(an);
      // reverseChar(an, len);

      // cout << "After:- " << an << endl;

      // Convert to upperCase :-
      // input with space:
      cin.getline(an, 100);
      // convertToUpperCase(an, 100);
      // cout << "To UpperCase:- " << an << endl;
      // replaceChar(an, 100);
      // cout << "Replace @ with space:- " << an << endl;

      // checkPalindrome(an, len);

      // cout << "Check Pallindorme: " << checkPalindrome(an, len) << endl;

      bool ispalindrome = checkPalindrome(an, len);

      if (ispalindrome)
      {
            cout << "Valid Palindrome" << endl;
      }
      else
      {
            cout << "InValid Palindrome" << endl;
      }
}
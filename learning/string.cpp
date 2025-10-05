#include <iostream>
#include <string>
using namespace std;

int findLength(char an[], int size)
{
      int length = 0;

      for (int i = 0; i < size; i++)
      {
            if (an[i] == '\0')
                  break;
            else

                  length++;
      }

      return length;
}

int main()
{
      // string name = "Anant Pathak";

      // string middle = "Madhav ";

      // string fullName = name.insert(6, middle);

      // cout << "After Insertion :  " << fullName << endl;

      // // find:-

      // cout << fullName.find(middle);

      // string str;
      // cout << "Give input to the string: " << endl;
      // getline(cin, str);

      // cout << str << endl;

      // Erase:-
      // cout << "Before : " << str << endl;

      // str.erase(4, 3);

      // cout << "After erasing   " << str << endl;

      // string name;
      // string lastName;
      // cout << "Give the input name: " << endl;
      // cin >> name;
      // cout << endl;
      // cin >> lastName;

      // cout << "Printing the name:- " << name << endl;

      // STL in strings

      // length of string:
      // cout << name.length();

      // Empty or not:

      // name.empty();

      // at
      // cout << name.at(0);

      // front:
      // cout << name.front();

      // back:
      // cout << name.back();

      // append:

      // string desc = name.append(lastName);

      // cout << desc << endl;

      // int i = 0;

      // while (name[i] != '\0')
      // {
      //       cout << "Printing index: " << i << " " << "Character: " << name[i] << endl;
      //       i++;
      // }

      // cout << "Value at 5th index" << name[5] << endl;

      // int value = (int)name[5];
      // cout << value;

      // char an[100];

      // cout << "Input the char array with spaces ::  " << endl;

      // // cin >> an;
      // cin.getline(an, 100);
      // int length = findLength(an, 100);

      // cout << "The length of this char array is:--  " << endl
      //      << length << endl;

      // using Inbuild Function::-

      // cout << "The length of this char array is:--  " << endl
      //      << strlen(an) << endl;

      // input the char array ch:
      // char ch[100];
      // cout << "Input the char array:-" << endl;
      // cin.getline(ch, 100);

      // getting output of this array ch:

      // cout << "Printing the char - array ch: " << endl
      //      << ch << endl;

      // printing using loop:

      // for (int i = 0; i < 10; i++)
      // {
      //       cout << "At index: " << i << " " << ch[i] << endl;
      // }

      // Printing integer value of null-char:-

      // char temp = ch[6];
      // // using type-casting method:

      // int value = (int)temp;

      // cout << "Value at  " << temp << value << endl;

      // Compairsion:

      // string str1;
      // cout << "Input string 1: " << endl;
      // getline(cin, str1);

      // string str2;
      // cout << "Input string 2: " << endl;
      // getline(cin, str2);

      // if (str1.compare(str2) == 0)
      // {
      //       cout << "AnnaGram" << endl;
      // }
      // else
      // {
      //       cout << "NOt Anna" << endl;
      // }

      string str = "This is Anant,bigDaddy of all";
      cout << str.substr(14, 8);

      return 0;
}
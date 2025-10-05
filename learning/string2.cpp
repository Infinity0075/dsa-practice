#include <iostream>
using namespace std;

int main()
{

      char an[100];
      cout << "Input the array:-" << endl;
      // cin >> an;

      cin.getline(an, 100);
      cout << "Output " << an << endl;
}
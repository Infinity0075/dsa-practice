#include <iostream>
using namespace std;

void Ajay(int i, int n)
{
      if (n == i)
      {
            return;
      }
      cout << n << endl;
      n++;
      Ajay(i, n++);
}

int main()
{
      int n;
      int i;
      cout << "Enter numbers: " << endl;
      cin >> i >> n;

      Ajay(i, n);
}
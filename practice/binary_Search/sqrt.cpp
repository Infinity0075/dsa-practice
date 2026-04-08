#include <iostream>

using namespace std;

// hmm yha pe  binary search ka uswe kiye h search space pe taki hmm usko dekh k observe kr ske ki kaha se kaha tak hmmko ans milega, baad m long long ko add kiye taki code fatee na at 2^31 int values pe- constrain of this question.

long long int sqrt(int x)
{
      int s = 0;
      int e = x;
      int ans = 0;

      long long int mid = s + (e - s) / 2;

      while (s <= e)
      {
            long long int sqrt = mid * mid;
            if (sqrt == x)
            {
                  return mid;
            }
            else if (sqrt < x)
            {
                  ans = mid;
                  s = mid + 1;
            }
            else
            {
                  e = mid - 1;
            }
            mid = s + (e - s) / 2;
      }
      return ans;
}
// now implementing float part also that means after decimals to be impolemented.

double floatsqrt(int x, int precision, int tempsol)
{
      double factor = 1;
      double ans = tempsol;
      for (int i = 0; i < precision; i++)
      {
            factor = factor / 10;

            double j = ans;
            while ((j + factor) * (j + factor) <= x)
            {
                  j = j + factor;
            }
            ans = j;
      }
      return ans;
}

int main()
{

      int x;
      cout << "enter a number to find its squareroot: " << endl;
      cin >> x;

      int tempsol = sqrt(x);
      cout << "The square root of the number is: " << floatsqrt(x, 5, tempsol) << endl;
}
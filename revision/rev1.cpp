#include <iostream>
using namespace std;

int main()
{

      int size = 6;
      int arr[] = {5, 20, 10, -15, -20, 1};

      int largest = INT_MIN;  // minus infinity
      int smallest = INT_MAX; // plus infinity

      int largeInd = -1;
      int smallInd = -1;

      for (int i = 0; i < size; i++)
      {
            smallest = min(arr[i], smallest);
            smallInd = i;
            // largest = max(arr[i], largest);
            if (arr[i] > largest)
            {
                  largest = arr[i];
                  largeInd = i;
            }
      }
      cout << "Largest value -> " << largest << endl;
      cout << "Index -> " << largeInd << endl;

      cout << "Smallest value -> " << smallest << endl;
      cout << "Index -> " << smallInd << endl;
      return 0;
}
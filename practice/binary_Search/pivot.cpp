#include <iostream>
#include <vector>
using namespace std;

// pivot element is the smallest element in the "rotated and sorted array", to find these elem we use bianry search

int pivotElem(vector<int> arr, int n)
{
      int low = 0, high = n - 1;

      while (low < high)
      {
            int mid = low + (high - low) / 2;

            if (arr[mid] > arr[high])
                  low = mid + 1;
            else
                  high = mid;
      }

      return arr[low];
}

int main()
{
      vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};

      int n = arr.size();

      // cout << "the pivot element is: " << pivotElem(arr, n) << endl;
      // output of pivot element here its 1 now lets find element in given array another good questions aked in many jobs portals
}
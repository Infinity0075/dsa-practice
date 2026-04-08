#include <iostream>
using namespace std;

// maximum sum of sub - array;
// first printing all sub arrays:-

void printSub(int array[], int size)
{
      // printing:

      for (int i = 0; i < size; i++)
      {
            for (int j = i; j < size; j++)
            {
                  for (int x = i; x <= j; x++)
                  {
                        cout << array[x];
                  }
                  cout << " ";
            }
            cout << endl;
      }
}

int maxSumSub(int array[], int size)
{
      int maxSum = 0;
      for (int start = 0; start < size; start++)
      {
            int currentSum = 0;
            for (int end = start; end < size; end++)
            {
                  currentSum += array[end];
                  maxSum = max(currentSum, maxSum);
            }
      }
      return maxSum;
}

// single element in the sorted array:-

int main()
{
      // check if the length of n is even or odd;
      int size;

      // cout << "enter the number: " << endl;

      // cin >> size;

      int array[] = {1, 2, 3, 4, 5};
      size = 5;

      // printSub(array, size);

      // int array[] = {3, -4, 5, -1, 7, -8};
      // size = 6;

      // printSub(array, size);
      // cout << maxSumSub(array, size);

      // product of array execpt self
}
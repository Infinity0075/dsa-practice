#include <iostream>
#include <vector>

using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
      int i = 0;
      int j = 0;
      int k = 0;

      while (i < n && j < m)
      {
            // checking and compairing ith and jth elements.
            if (arr1[i] < arr2[j])
            {
                  arr3[k] = arr1[i];
                  k++;
                  i++;
            }
            else
            {
                  arr3[k] = arr2[j];
                  k++;
                  j++;
            }
      }
      // coping the rest elements if available in arr1;
      while (i < n)
      {
            arr3[k] = arr1[i];
            k++;
            i++;
      }
      // coping the rest elements if available in arr2;
      while (j < m)
      {
            arr3[k] = arr2[j];
            k++;
            j++;
      }
}

void print(int arr3[], int n)
{
      for (int i = 0; i < n; i++)
      {
            cout << arr3[i] << " ";
      }
      cout << endl;
}

int main()
{
      int arr1[5] = {1, 3, 5, 7, 9};
      int arr2[4] = {2, 4, 6, 8};

      int arr3[9] = {0};

      merge(arr1, 5, arr2, 4, arr3);
      cout << "The sorted and merged array is: " << endl;
      print(arr3, 9);
}

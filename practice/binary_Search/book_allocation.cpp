// book allocation problem using binary search.

#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int mid)
{
      int studentCount = 1;
      int pageSum = 0;

      for (int i = 0; i < n; i++)
      {
            if (pageSum + arr[i] > mid)
            {
                  studentCount++;
                  pageSum = arr[i];
                  if (studentCount > m || arr[i] > mid)
                        return false;
            }
            else
            {
                  pageSum += arr[i];
            }
      }
      return true;
}

int bookAllocation(vector<int> &arr, int n, int m)
{
      int s = 0;
      int ans = -1;

      int sum = 0;
      for (int i = 0; i < n; i++)
      {
            sum += arr[i];
      }
      int e = sum;
      int mid = s + (e - s) / 2;
      while (s <= e)
      {
            if (isPossible(arr, n, m, mid))
            {
                  ans = mid;
                  e = mid - 1;
            }
            else
            {
                  s = mid + 1;
            }
            mid = s + (e - s) / 2;
      }
      return ans;
}

int main()
{

      int n;
      cout << " Enter the number of books: " << endl;
      cin >> n;

      vector<int> books(n);
      cout << "Enter the number of pages in each books" << endl;

      for (int i = 0; i < n; i++)
      {
            cin >> books[i];
      }

      int m; // number of students

      cout << "Enter the number of students: " << endl;
      cin >> m;

      if (m > n)
      {
            cout << "Not enough books for each student" << endl;
            return 0;
      }

      int ans = bookAllocation(books, n, m);

      cout << "Minimum number of pages: " << ans << endl;

      return 0;
}

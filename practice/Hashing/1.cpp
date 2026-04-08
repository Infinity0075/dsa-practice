// general hashing method for integers only.
#include <iostream>
using namespace std;

int main()
{
      int N;
      cin >> N;

      int arr[N];
      for (int i = 0; i < N; i++)
      {
            cin >> arr[i];
      }
      // now lets declare a hash array and store the values in it..
      int hash[14] = {0};
      for (int i = 0; i < N; i++)
      {
            hash[arr[i]] += 1;
      }

      // for inputing testcases/querries..
      int q;
      cin >> q;

      while (q--)
      {
            int number;
            cin >> number;
            // fetching the number;
            cout << hash[number] << endl;
      }

      return 0;
}
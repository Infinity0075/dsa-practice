
// here we r going to solve the problem of placing the cow in such a way that the min distance between the agressive cow is maximized.
//  Statement: You are given an array 'arr' of size 'n' which denotes the position of stalls.
// You are also given an integer 'k' which denotes the number of aggressive cows.You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.Find the maximum possible minimum distance.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
      int n, k;
      cout << "Enter the number of stalls and the number of cows: " << endl;
      cin >> n >> k;

      cout << "Enter the position of stalls: " << endl;
      vector<int> nums(n);
      for (int i = 0; i < n; i++)
      {
            cin >> nums[i];
      }
}

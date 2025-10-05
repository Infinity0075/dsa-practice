#include <iostream>
#include <vector>
#include <set>
#include <utility>
using namespace std;

int kdiffPairs(vector<int> &nums, int k)
{
      set<pair<int, int>> uniquePairs;

      for (int i = 0; i < nums.size(); i++)
      {
            for (int j = i + 1; j < nums.size(); j++)
            {
                  if (abs(nums[i] - nums[j]) == k)
                  {
                        // To avoid duplicates, we store pairs in sorted order
                        // by using min and max functions
                        // This ensures that (a, b) and (b, a) are considered the same pairs.
                        int a = min(nums[i], nums[j]);
                        int b = max(nums[i], nums[j]);
                        uniquePairs.insert({a, b});
                  }
            }
      }
      return uniquePairs.size();
}

// optimization using hash map:

int findPairs(vector<int> &nums, int k)
{
      if (k < 0)
            return 0; // k must be non-negative

      unordered_map<int, int> freq;
      int count = 0;

      // Count frequency of each number
      for (int num : nums)
      {
            freq[num]++;
      }

      for (auto &[num, f] : freq)
      {
            if (k == 0)
            {
                  // Case 1: Count elements that appear more than once
                  if (f > 1)
                        count++;
            }
            else
            {
                  // Case 2: Check if num + k exists in map
                  if (freq.count(num + k))
                        count++;
            }
      }

      return count;
}

int main()
{
      vector<int> nums = {3, 1, 4, 1, 5};
      int k = 2;
      cout << kdiffPairs(nums, k) << endl; // Output: 2
      cout << findPairs(nums, k) << endl;

      vector<int> nums2 = {1, 2, 3, 4, 5};
      int k2 = 1;
      cout << findPairs(nums2, k) << endl;
      cout << kdiffPairs(nums2, k2) << endl; // Output: 4
}

#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
      int s = 0;
      int e = v.size() - 1;

      while (s <= e)
      {
            swap(v[s], v[e]);
            s++;
            e--;
      }
      return v;
}

void printing(vector<int> arr)
{

      for (int i = 0; i < arr.size(); i++)
      {
            cout << arr[i] << " ";
      }
      cout << endl;
}

int main()
{

      vector<int> v;

      v.push_back(9);
      v.push_back(11);
      v.push_back(3);
      v.push_back(4);
      v.push_back(1);

      vector<int> ans = reverse(v);

      printing(ans);
}
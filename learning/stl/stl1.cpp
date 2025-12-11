#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;

int main()
{

      // set:- same as map but stores a unique values and is in sorted order
      set<int> s;

      s.insert(1);
      s.insert(12);
      s.insert(14);
      s.insert(3);
      s.insert(4);

      // see all the values apeared to be printed in sorted order and always ignores the duplicate values even the size also dont increase;

      s.insert(14);
      s.insert(3);
      s.insert(4);

      cout << *(s.lower_bound(4)) << " " << endl;
      // same above values: printing them
      for (auto val : s)
      {
            cout << val << endl;
      }

      // lets check size also
      cout << s.size();

      // map

      // map<int, int> m;
      // m[1] = 25;
      // m[2] = 52;
      // m[3] = 27;
      // m[4] = 25;
      // m[5] = 32;
      // m[6] = 0;

      // // printing
      // for (auto p : m)
      // {
      //       cout << p.first << " :- " << " " << p.second << endl;
      // }
      // cout << endl;

      // map<string, int> m2;
      // // by default map sort key in acssending order..
      // m2["Anant"] = 01;
      // m2["Saurav"] = 02;
      // m2["Ajay"] = 03;
      // m2["Mauraya"] = 04;
      // m2["Sonika"] = 05;
      // m2["Lund"] = 06;

      // m2.emplace("chut", 0);

      // for (auto p : m2)
      // {
      //       cout << p.first << " " << p.second << endl;
      // }

      // priority_queue<int> q;

      // q.push(5);
      // q.push(3);
      // q.push(10);
      // q.push(4);

      // while (!q.empty())
      // {
      //       cout << q.top() << " ";
      //       q.pop();
      // }
      // cout << endl;

      // // for reverse order i.e small to high:

      // priority_queue<int, vector<int>, greater<int>> q2;

      // q2.push(5);
      // q2.push(3);
      // q2.push(10);
      // q2.push(4);

      // while (!q2.empty())
      // {
      //       cout << q2.top() << " ";
      //       q2.pop();
      // }
      // cout << endl;

      // push
      // s.push(1);
      // s.push(2);

      // s.push(3);

      // s.push(4);
      // cout << s.top() << endl;

      // while (!s.empty())
      // {
      //       cout << s.top() << " ";
      //       s.pop();
      // }
      // cout << endl;

      // stack<int> s2;

      // s2.swap(s);
      // while (!s2.empty())
      // {
      //       cout << "From s2: " << s2.top() << " ";
      //       s2.pop();
      // }
      // cout << endl;

      // Queue:- same as stack but work as FIFO principle;

      // queue<int> q;
      // q.push(1);
      // q.push(2);
      // q.push(3);
      // q.push(4);
      // q.push(5);
      // q.push(6);

      // // while (!q.empty())
      // // {
      // //       cout << q.front() << " ";
      // //       q.pop();
      // // }
      // // cout << endl;

      // queue<int> q2;

      // q2.swap(q);

      // cout << q.size() << endl;
      // cout << q2.size() << endl;

      // while (!q2.empty())
      // {
      //       cout << "In q2" << q2.front() << " ";
      //       q2.pop();
      // }
      // cout << endl;
}
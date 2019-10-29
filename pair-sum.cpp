#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<int, int> m;
  int ar[] = {1, 2, 3, 4, 5};
  int t = 9;

  for (int i = 0; i < 5; i++)
  {
    int diff = t - ar[i];
    m[diff] = ar[i];
  }

  for (auto itr = m.begin(); itr != m.end(); itr++) 
    cout << itr->first << '\t' << itr->second << '\n'; 
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int x;
  cin >> x;
  int count = 0;
  int active []={1,2,4};
  for (int i = 0; i < 3;i++)
  {
    if (x>=active[i])
    {
      count++;
      x -= active[i];
    }
  }
    
  cout << count << endl;

  return 0;
}
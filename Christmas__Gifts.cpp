#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int h, l, w;
    cin >> h >> l >> w;
    int surface = 2 * (h * l + l * w + w * h);
    int total = (1000 / surface);
    cout << total << endl;
  }
  return 0;
}
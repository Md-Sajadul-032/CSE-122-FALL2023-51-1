#include <iostream>
using namespace std;
 
int main()
{
  int x;
  cin >> x;
  for (int i = 0; i < x; i++)
  {
    string n;
    cin >> n;
    if (n.length() > 10)
    {
      cout << n[0] << n.length() - 2 << n[n.length() - 1] << endl;
    }
    else
    {
      cout << n << endl;
    }
  }

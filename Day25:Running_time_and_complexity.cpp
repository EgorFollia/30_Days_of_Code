#include <iostream>

using namespace std;

int main()
{
  int t = 0;
  cin >> t;

  while (t--)
  {
    bool prime;
    int n = 0, i = 0;
    cin >> n;

    if (n == 1)
      cout << "Prime" << endl;

    for (i = 2; i < n; i++)
    {
      if (n % i == 0)
      {
        cout << "Not prime" << endl;
        break;
      }
    }

    if (n == i)
      cout << "Prime" << endl;
  }

  return 0;
}

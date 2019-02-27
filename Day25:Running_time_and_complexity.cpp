#include <iostream>

using namespace std;

bool prime(int n)
{
  if (n <= 1)
    return false;

  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;

  return true;
}

int main()
{
  int t = 0;
  cin >> t;

  while (t--)
  {
    int n = 0;
    cin >> n;

    prime(n) ? cout << "Prime" << endl : cout << "Not prime" << endl;
  }

  return 0;
}

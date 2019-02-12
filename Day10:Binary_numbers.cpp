#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 0, k = 0, rem = 0;

    while (n > 0)
    {
      rem = n%2;
      n /= 2;
      if (rem == 1)
      {
        s++;
        if (s >= k)
          k = s;
      }
      else
        s = 0;
    }

    cout << k << endl;

    return 0;
}

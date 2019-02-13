#include <iostream>

using namespace std;

int main()
{
    int h = 6, w = 6, sum = 0;
    int arr [h][w] = {};

    for (int i = 0; i < h; i++)
    {
      for (int j = 0; j < w; j++)
      {
        int k = 0;
        cin >> k;
        arr[i][j] = k;
      }
    }

    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        int temp = 0;
        temp += arr[i][j];
        temp += arr[i][j + 1];
        temp += arr[i][j + 2];
        temp += arr[i + 1][j + 1];
        temp += arr[i + 2][j];
        temp += arr[i + 2][j + 1];
        temp += arr[i + 2][j + 2];

        if (temp > sum || i == 0 && j == 0)
          sum = temp;
      }
    }

    cout << sum << endl;
}

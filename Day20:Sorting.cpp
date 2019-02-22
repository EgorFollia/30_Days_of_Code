#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector <int> ar)
{
  int numberOfSwaps = 0;
  int n = ar.size();

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - 1; j++)
    {
      if (ar[j] > ar[j + 1])
      {
        swap(ar[j], ar[j + 1]);
        numberOfSwaps++;
      }
    }

  if (numberOfSwaps == 0)
    break;
  }

  cout << "Array is sorted in " << numberOfSwaps << " swaps." << endl;
  cout << "First Element: " << ar[0] << endl;
  cout << "Last Element: " << ar[n - 1] << endl;
}

int main()
{
  int n = 0;
  cin >> n;

  vector <int> ar;
  while (n--)
  {
    int el;
    cin >> el;
    ar.push_back(el);
  }

  bubble_sort(ar);

  return 0;
}

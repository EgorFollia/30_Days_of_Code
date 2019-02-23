#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T>
void printArray(vector <T> ar)
{
  for (auto i : ar)
    cout << i << endl;
}

int main()
{
	int n;
	cin >> n;

	vector<int> int_vector(n);
	while (n--)
  {
		int el;
		cin >> el;
		int_vector.push_back(el);
	}

	cin >> n;
	vector<string> string_vector(n);
	while (n--)
  {
		string value;
		cin >> value;
		string_vector.push_back(value);
	}

	printArray <int> (int_vector);
	printArray <string> (string_vector);

	return 0;
}

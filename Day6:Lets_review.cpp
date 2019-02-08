#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
	string s, s_1, s_2;
	cin >> s;

	for (int j = 0; j < s.length(); j++)
	{
		if (j % 2 == 0)
			s_1 += s[j];

		else
			s_2 += s[j];
	}

        cout << s_1 << ' ' << s_2 << endl;
    }

    return 0;
}

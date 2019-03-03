#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
		int answer = 0;

		for (int i = 1; i < n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{	
				int result = i & j;
				
				if (result < k && result > answer)
					answer = result;
			}
		}

		cout << answer << endl;	
    }
}

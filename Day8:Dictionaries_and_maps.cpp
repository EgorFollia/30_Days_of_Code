#include <iostream>
#include <map>

using namespace std;

int main()
{
	int n;
	cin >> n;

	map <string, int> queries;
	string name; long phNumber;
	for (int i = 0; i < n; i++)
	{
		cin >> name	>> phNumber;
		queries[name] += phNumber;
	}

	while(cin >> name)
	{
		if (queries.find(name) != queries.end())
			cout << name << '=' << queries.find(name) -> second << endl;
		else
			cout << "Not found" << endl;
	}

	return 0;
}

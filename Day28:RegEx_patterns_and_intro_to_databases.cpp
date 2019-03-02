#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    vector <string> names;
    while (n--)
    {
      string name, email;
      cin >> name >> email;

      if (email.find("@gmail") != string::npos)
          names.push_back(name);
    }

    sort(names.begin(), names.end());
    for (auto name : names)
      cout << name << endl;
}

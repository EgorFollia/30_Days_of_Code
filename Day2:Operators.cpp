#include <bits/stdc++.h>

using namespace std;

int main()
{
    double meal;
    cin >> meal;

    int tip;
    cin >> tip;

    int tax;
    cin >> tax;

    cout << round(meal * (1 + (tip + tax) * 0.01)) << endl;

    return 0;
}

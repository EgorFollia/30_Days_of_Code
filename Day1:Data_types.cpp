#include <iostream>

using namespace std;

int main() 
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int one;
    cin >> one;
  
    double two;
    cin >> two;
  
    cin.ignore();
    string str;
    getline(cin, str);

    cout << i + one << endl;
    cout << d + two << endl;
    cout << s + str << endl;
 
    return 0;
}

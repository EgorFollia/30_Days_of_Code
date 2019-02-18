#include <iostream>

using namespace std;

int main()
{
    string S;
    cin >> S;

    string::size_type alias;
    try
    {
      int I = stoi(S, &alias);
      cout << I << endl;
    }

    catch (exception e)
    {  cout << "Bad String" << endl;  }

    return 0;
}

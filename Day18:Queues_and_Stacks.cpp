#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution
{
public:
  stack <char> st;
  queue <char> qu;

  void pushCharacter(char ch)
  {
    st.push(ch);
  }

  void enqueueCharacter(char ch)
  {
    qu.push(ch);
  }

  char popCharacter()
  {
    char pops = st.top();

    return pops;
  }

  char dequeueCharacter()
  {
    char deqs = qu.front();

    return deqs;
  }
};

int main()
{
    Solution obj;
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;


    for (int i = 0; i < s.length() / 2; i++)
    {
        if (obj.popCharacter() != obj.dequeueCharacter())
        {
            isPalindrome = false;

            break;
        }
    }

    if (isPalindrome)
        cout << "The word, " << s << ", is a palindrome.";
    else
        cout << "The word, " << s << ", is not a palindrome.";

    return 0;
}

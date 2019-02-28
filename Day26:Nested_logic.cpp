#include <iostream>
#include <vector>

using namespace std;

vector <int> Input()
{
  int line_len = 3;
  vector <int> temp;

  while (line_len--)
  {
    int elem;
    cin >> elem;
    temp.push_back(elem);
  }

  return temp;
}

int main()
{
  vector <int> date_act = Input();
  vector <int> date_exp = Input();

  int num_days_late = date_act[0] - date_exp[0];
  int num_months_late = date_act[1] - date_exp[1];
  int num_years_late = date_act[2] - date_exp[2];

  int fine = date_act[2] - date_exp[2] > 0 ? 10000 : date_act[1] - date_exp[1] > 0 && num_years_late == 0 ? num_months_late * 500 :
                date_act[0] - date_exp[0] > 0 && num_years_late == 0 ? num_days_late * 15 : 0;
  cout << fine << endl;

  return 0;
}

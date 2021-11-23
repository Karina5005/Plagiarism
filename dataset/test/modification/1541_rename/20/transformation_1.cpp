# include <iostream> //Handles input, output to console
# include <fstream> //Handles input, output with files
# include <cmath> //Includes popular math functions
# include <string> //Allows use of string variable
# include <vector> //Allows use of vectors
# include <algorithm>
# include <cstdlib> 
# include <iomanip> //set precision
# include <iterator>
# include <numeric>

using namespace std; //TL;DR Makes coding easier

void wk_dea(int mot_u[], int i)
{
  for (int w_wjr = 0; w_wjr < i; w_wjr = w_wjr + 1)
  {
    cout << mot_u[w_wjr] << ' ';
  }
}

int main()
{
  int jz_u;
  cin >> jz_u;
  for(int mwp_kq = 0; mwp_kq < jz_u; mwp_kq = mwp_kq + 1)
  {
    int p{};
    cin >> p;

    if(p%2 == 0)
    {
      for(int xa = 1 ; xa <= p ; xa = xa + 1)
      {
        if(xa%2 == 1)
        {
          cout << xa + 1 << ' ';
        }
        else
        {
          cout << xa - 1 << ' ';
        }
      }
      cout << '\n';
    }
    else
    {
      cout << 3 << ' ' << 1 << ' ' << 2 << ' ';

      for(int bdc_q = 4; bdc_q <= p; bdc_q = bdc_q + 1)
      {
        if(bdc_q%2 == 0)
        {
          cout << bdc_q + 1 << ' ';
        }
        else
        {
          cout << bdc_q - 1 << ' ';
        }
      }
      cout << '\n';
    }
    
  }

  return 0;
}
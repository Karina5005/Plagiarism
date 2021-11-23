# include <iostream> 
# include <fstream> 
# include <cmath> 
# include <string> 
# include <vector> 
# include <algorithm>
# include <cstdlib> 
# include <iomanip> 
# include <iterator>
# include <numeric>

using namespace std; 

void printarray(int arr[], int size)
{
  for (int i = 0; i < size; i = i + 1)
  /* 'for' inside */
  {
    cout << arr[i] << ' ';
  }
}

int main()
{
  int testcase;
  cin >> testcase;
  for(int m = 0; m < testcase; m = m + 1)
  /* 'for' inside */
  {
    int number{};
    cin >> number;

    /* 'if' begin */
    if(number%2 == 0)
    /* 'if' inside */
    {
      for(int i = 1 ; i <= number ; i = i + 1)
      /* 'for' inside */
      {
        /* 'if' begin */
        if(i%2 == 1)
        /* 'if' inside */
        {
          cout << i + 1 << ' ';
        }
        else
        {
          cout << i - 1 << ' ';
        }
      }
      cout << '\n';
    }
    else
    {
      cout << 3 << ' ' << 1 << ' ' << 2 << ' ';

      for(int i = 4; i <= number; i = i + 1)
      /* 'for' inside */
      {
        /* 'if' begin */
        if(i%2 == 0)
        /* 'if' inside */
        {
          cout << i + 1 << ' ';
        }
        else
        {
          cout << i - 1 << ' ';
        }
      }
      cout << '\n';
    }
    
  }

  return 0;
}
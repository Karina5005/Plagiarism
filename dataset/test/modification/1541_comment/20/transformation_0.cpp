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

void printarray(int arr[], int size)
{
  for (int i = 0; i < size; i = i + 1)
  {
    cout << arr[i] << ' ';
  }
}

int main()
{
  int testcase;
  cin >> testcase;
  for(int m = 0; m < testcase; m = m + 1)
  {
    int number{};
    cin >> number;

    if(number%2 == 0)
    {
      for(int i = 1 ; i <= number ; i = i + 1)
      {
        if(i%2 == 1)
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
      {
        if(i%2 == 0)
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
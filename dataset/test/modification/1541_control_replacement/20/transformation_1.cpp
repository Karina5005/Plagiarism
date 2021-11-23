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
  {
  int i = 0;
  while (i < size) {
    cout << arr[i] << ' ';
  	i = i + 1; 
  
  }}
}

int main()
{
  int testcase;
  cin >> testcase;
  {
  int m = 0;
  while (m < testcase) {
    int number{};
    cin >> number;

    if(number%2 == 0)
    {
      {
      int i = 1 ;
      while (i <= number) {
        if(i%2 == 1)
        {
          cout << i + 1 << ' ';
        }
        else
        {
          cout << i - 1 << ' ';
        }
      	i = i + 1; 
      
      }}
      cout << '\n';
    }
    else
    {
      cout << 3 << ' ' << 1 << ' ' << 2 << ' ';

      {
      int i = 4;
      while (i <= number) {
        if(i%2 == 0)
        {
          cout << i + 1 << ' ';
        }
        else
        {
          cout << i - 1 << ' ';
        }
      	i = i + 1; 
      
      }}
      cout << '\n';
    }
    
  	m = m + 1; 
  
  }}

  return 0;
}
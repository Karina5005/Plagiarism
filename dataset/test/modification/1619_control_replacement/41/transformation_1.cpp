#include <iomanip>
#include <iostream>
#include<iostream>
using namespace std;
int main() {
	string s;
	int n;
	bool ch = true;
	cin >> n;
	for ( ; n--; ) 
{
		cin >> s;
		ch = true;
		if (!(s.length() % 2 == 0)) {
			ch = false;
		}
		else {
			{
			int i = 0;
			for ( ; i < s.length()/2; ) 
{
				if (s[i] != s[s.length() / 2 +i])
					ch = false;
				i++; 
			
			}}
		}
		cout << (ch ? "YES" : "NO") << endl;
	}

}
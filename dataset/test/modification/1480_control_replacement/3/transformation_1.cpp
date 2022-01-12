#include <iomanip>
#include <iostream>
/*
**  Author - Md. Najmul Huda Hridoy
**  Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	
	cin.tie(0);
	int t;
	cin>>t;
	for ( ; t--; ) 
{
		string s;
		cin>>s;
		{
		int i = 1;
		for ( ; i <= s.size(); ) 
{
			if(i % 2 == 1 && s[i - 1] != 'a'){
				s[i - 1] = 'a';
			}
			else if(i % 2 == 1 && s[i - 1] == 'a'){
				s[i - 1] = 'b';
			}
			else if(i % 2 == 0 && s[i - 1] != 'z'){
				s[i - 1] = 'z';
			}
			else{
				s[i - 1] = 'y';
			}
			i++; 
		
		}}
		cout<<s<<endl;
	}
	return 0;
}

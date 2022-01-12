#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
for ( ; t--; ) 
{
    string s;
    cin>>s;
    {
    int i=0;
    for ( ; i<s.length(); ) 
{
      if(!(s.at(i)!='a')){s.at(i)='b';}
      else{s.at(i)='a';}
      i++;
    	i++; 
    
    }}
     {
     int i=1;
     for ( ; i<s.length(); ) 
{
       if(!(s.at(i)!='z')){s.at(i)='y';}
      else{s.at(i)='z';}
     i++; 
    	i++; 
    
    }}
  cout<<s<<endl;  
    
}

	return 0;
}

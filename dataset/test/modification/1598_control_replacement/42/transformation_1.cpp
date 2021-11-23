#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{ cin.tie(0); cout.tie(0);
int t;cin >> t; for ( ; t--; ) 
{long long n; cin >> n;
char arr[2][n]; bool han = true;
{
int i = 0 ;
for ( ; i <n; ) 
{cin >> arr[0][i];	i++; 

}}
{
int i = 0 ;
for ( ; i <n; ) 
{cin >> arr[1][i];	i++; 

}}
{
int i = 0 ;
for ( ; i <n; ) 
{
	//cout << arr[0][i] << " " << arr[1][i] << endl; 
	if(arr[0][i]=='1'&&arr[1][i]=='1'){han = false; break;}
	i++; 

}} if(!(han)){ cout << "NO";} else{cout << "YES"; } cout << endl;
}
}
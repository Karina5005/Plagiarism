#include <iomanip>
#include <iostream>
/**
 *
 * Author: sdah47
 * Created on Fri Dec 31 18:51:30 2021.
 */

#include <iostream>

#define endl '\n'
#define ll long long
#define ull unsigned ll

#ifdef _LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

using namespace std;

// Take input to plain C array.

template <typename T1, typename T2>
void input(T1* arr, T2 n) {
	{
	T2 i = 0;
	for ( ; i < n; ) 
{
		cin >> *(arr + i);
		i++; 
		
		}}
}

// Take input to STL Containers.

template <typename T1, typename T2>
void input(T1 stl, T2 n) {
	{
	T2 i = 0;
	for ( ; i < n; ) 
{
		cin >> stl[i];
		i++; 
		
		}}
}

void solve() {
	string s;

	cin >> s;

	if(s.size() & 1) {
		cout << "NO" << endl;
		return;
	}

	size_t half = s.size() / 2;

	if(!(s.substr(0, half) == s.substr(half, half))) 
		 */

#include <iostream>

#define endl '\n'
#define ll long long
#define ull unsigned ll

#ifdef _LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

using namespace std;

// Take input to plain C array.

template <typename T1, typename T2>
void input(T1* arr, T2 n) {
	{
	T2 i = 0;
	while (i < n) {
		cin >> *(arr + i);
		i++; 
		
		}}
}

// Take input to STL Containers.

template <typename T1, typename T2>
void input(T1 stl, T2 n) {
	{
	T2 i = 0;
	while (i < n) {
		cin >> stl[i];
		i++; 
		
		}}
}

void solve() {
	string s;

	cin >> s;

	if(s.size() & 1) {
		cout << "NO" << endl;
		return;
	}

	size_t half = s.size() / 2;

	if(s.substr(0, half) == s.substr(half, half)) 
		cout << "YES" << endl;
	else  */

#include <iostream>

#define endl '\n'
#define ll long long
#define ull unsigned ll

#ifdef _LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

using namespace std;

// Take input to plain C array.

template <typename T1, typename T2>
void input(T1* arr, T2 n) {
	{
	T2 i = 0;
	while (i < n) {
		cin >> *(arr + i);
		i++; 
		
		}}
}

// Take input to STL Containers.

template <typename T1, typename T2>
void input(T1 stl, T2 n) {
	{
	T2 i = 0;
	while (i < n) {
		cin >> stl[i];
		i++; 
		
		}}
}

void solve() {
	string s;

	cin >> s;

	if(s.size() & 1) {
		cout << "NO" << endl;
		return;
	}

	size_t half = s.size() / 2;

	if(s.substr(0, half) == s.substr(half, half)) 
		cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(void) {
	cin.tie(nullptr) -> sync_with_stdio(false);
	cin.exceptions(cin.failbit);
	
	int T = 1;

	cin >> T;

	while(T--) 
		solve();
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
	*this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
// debug & operator << (debug & dd, P p) { dd << "(" << p.x << ", " << p.y << ")"; return dd; }

void test_case() {
	int h, w;
	scanf("%d%d", &h, &w);
	vector<vector<int>> grid(h, vector<int>(w));
	vector<vector<int>> pref(h + 1, vector<int>(w + 1));
	{
	int row = 0;
	while (row < h) {
		static char s[405];
		scanf("%s", s);
		{
		int col = 0;
		while (col < w) {
			grid[row][col] = (s[col] == '1');
			++col; 
		
		}}
		++row; 
	
	}}
	{
	int row = 0;
	while (row < h) {
		{
		int col = 0;
		while (col < w) {
			pref[row+1][col+1] = grid[row][col] + pref[row][col+1] + pref[row+1][col] - pref[row][col];
			++col; 
		
		}}
		++row; 
	
	}}
	auto get = [&](int r1, int c1, int r2, int c2) {
		return pref[r2+1][c2+1] - pref[r1][c2+1] - pref[r2+1][c1] + pref[r1][c1];
	};
	auto inv = [&](int r1, int c1, int r2, int c2) {
		return (r2 - r1 + 1) * (c2 - c1 + 1) - get(r1, c1, r2, c2);
	};
	int answer = h * w;
	{
	int row = 0;
	while (row < h) {
		{
		int col = 0;
		while (col < w) {
			{
			int r2 = row + 4;
			while (r2 < h) {
				{
				int c2 = col + 3;
				while (c2 < w) {
					int sure = get(row + 1, col + 1, r2 - 1, c2 - 1);
					if(sure >= answer) {
						break;
					}
					sure += inv(row, col + 1, row, c2 - 1);
					sure += inv(row + 1, col, r2 - 1, col);
					if(sure >= answer) {
						break;
					}
					answer = min(answer, sure + inv(r2, col + 1, r2, c2 - 1) + inv(row + 1, c2, r2 - 1, c2));
					++c2; 
				
				}}
				++r2; 
			
			}}
			++col; 
		
		}}
		++row; 
	
	}}
	printf("%d\n", answer);
}

int main() {
	int T;
	scanf("%d", &T);
	while(T--) {
		test_case();
	}
}

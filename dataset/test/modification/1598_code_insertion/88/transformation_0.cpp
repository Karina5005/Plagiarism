#include <bits/stdc++.h>
using namespace std;

#define int int64_t //be careful about this 

#define pr pair
#define ar array
#define fr first
#define sc second
#define vt vector
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound

#define SZ(x) ((int)(x).size())
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define mem(a,b) memset(a, b, sizeof(a))

template<class A> void rd(vt<A>& v);
template<class T> void rd(T& x){ cin >> x;}
template<class H, class... T> void rd(H& h, T&... t) { rd(h); rd(t...);}
template<class A> void rd(vt<A>& x) { for(auto& a : x) rd(a);}

template<class T> bool ckmin(T& a, const T b) { return b < a ? a = b, 1 : 0;}
template<class T> bool ckmax(T& a, const T b) { return a < b ? a = b, 1 : 0;}

template<typename T>
void __p(T a) {
  cout<<a; 
}
template<typename T, typename F>
void __p(pair<T, F> a) {
  cout<<"{";
  __p(a.first);
  cout<<",";
  __p(a.second);
  cout<<"}\n"; 
}
template<typename T>
void __p(std::vector<T> a) {
  cout<<"{";
  for(auto it=a.begin(); it<a.end(); it++)
    __p(*it),cout<<",}\n"[it+1==a.end()]; 
}
template<typename T, typename ...Arg>
void __p(T a1, Arg ...a) {
  __p(a1);
  __p(a...);
}
template<typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
  cout<<name<<" : ";
  __p(arg1);
  cout<<endl;
}
template<typename Arg1, typename ... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args) {
  int bracket=0,i=0;
  for(;; i++)
    if(names[i]==','&&bracket==0)
      break;
    else if(names[i]=='(')
      bracket++;
    else if(names[i]==')')
      bracket--;
  const char *comma=names+i;
  cout.write(names,comma-names)<<" : ";
  __p(arg1);
  cout<<" | ";
  __f(comma+1,args...);
}


void setIO(string s = "") {
  ios_base::sync_with_stdio(0); cin.tie(0); 
	cout.precision(15);	cout << fixed;
}


/*/--------------------------------------------------look below-----------------------------------------------------------------------------------/*/

































signed main(){
  setIO();
  int n,m,q;
  rd(n,m,q);

  vt<vt<int>> valr(n,vt<int> (m,0)), vald(n,vt<int> (m,0)), is_blocked(n,vt<int> (m,0));
  int ans = 0, free = n * m;

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      int x = min(n - i - 1, m - j - 1);
      ans += valr[i][j] = 2 * x + (j + x + 1 < m ? 1 : 0) + 1;
      ans += vald[i][j] = 2 * x + (i + x + 1 < n ? 1 : 0) + 1;
    }
  }

  auto make_block = [&](int i, int j) -> void {
    for(int set_val = 0; set_val <= 1; ++set_val){
      for(int x = 0, ni = i, nj = j, move_up = set_val; ni >= 0 && nj >= 0 && !is_blocked[ni][nj]; ++x, move_up ^= 1, (move_up ? --ni : --nj)){
        if(move_up){
          ans -= vald[ni][nj];
          ans += vald[ni][nj] = x; 
        }else{
          ans -= valr[ni][nj];
          ans += valr[ni][nj] = x;  
        }
      }
    }
  };

  auto make_free = [&](int i, int j) -> void {
    for(int set_val = 0; set_val <= 1; ++set_val){
      int intial;
      if(set_val){
        intial = (i + 1 == n ? 0 : valr[i+1][j]) + 1;
      }else{
        intial = (j + 1 == m ? 0 : vald[i][j+1]) + 1;
      }
      for(int x = intial, ni = i, nj = j, move_up = set_val; ni >= 0 && nj >= 0 && !is_blocked[ni][nj]; ++x, move_up ^= 1, (move_up ? --ni : --nj)){
        if(move_up){
          ans -= vald[ni][nj];
          ans += vald[ni][nj] = x; 
        }else{
          ans -= valr[ni][nj];
          ans += valr[ni][nj] = x;  
        }
      }
    }
  };

  while(q--){
    int i,j; rd(i,j); --i,--j;
    if(is_blocked[i][j]){
      ++free;
      is_blocked[i][j] = 0;
      make_free(i,j);
    }else{
      --free;
      make_block(i,j);
      is_blocked[i][j] = 1;
    }
    cout << ans - free << "\n";
  }

  
}







// tips to avoid bugs.

/*
	* be careful of whats happening you dont want a continue statement to miss imp line of code.
	* be careful when to update what since it might be needed in next segment of code.
	* dont get stuck on one idea.
*/

















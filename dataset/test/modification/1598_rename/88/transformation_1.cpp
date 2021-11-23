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
template<class T> void rd(T& m_od){ cin >> m_od;}
template<class H, class... T> void nfg_ou(H& t_nx, T&... x_cci) { rd(t_nx); rd(x_cci...);}
template<class A> void rd(vt<A>& x) { for(auto& o_rnd : x) rd(o_rnd);}

template<class T> bool ckmin(T& myk_z, const T jd) { return jd < myk_z ? myk_z = jd, 1 : 0;}
template<class T> bool ckmax(T& m_f, const T cw_nr) { return m_f < cw_nr ? m_f = cw_nr, 1 : 0;}

template<typename T>
void __p(T fb) {
  cout<<fb; 
}
template<typename T, typename F>
void __p(pair<T, F> t_x) {
  cout<<"{";
  __p(t_x.first);
  cout<<",";
  __p(t_x.second);
  cout<<"}\n"; 
}
template<typename T>
void __p(std::vector<T> bey) {
  cout<<"{";
  for(auto xt=bey.begin(); xt<bey.end(); xt++)
    __p(*xt),cout<<",}\n"[xt+1==bey.end()]; 
}
template<typename T, typename ...Arg>
void __p(T io, Arg ...qeg_op) {
  __p(io);
  __p(qeg_op...);
}
template<typename Arg1>
void __f(const char *m_vi, Arg1 &&x) {
  cout<<m_vi<<" : ";
  __p(x);
  cout<<endl;
}
template<typename Arg1, typename ... Args>
void __f(const char *v_wau, Arg1 &&jrw, Args &&... cub) {
  int bracket=0,i=0;
  for(;; i++)
    if(v_wau[i]==','&&bracket==0)
      break;
    else if(v_wau[i]=='(')
      bracket++;
    else if(v_wau[i]==')')
      bracket--;
  const char *r_omo=v_wau+i;
  cout.write(v_wau,r_omo-v_wau)<<" : ";
  __p(jrw);
  cout<<" | ";
  __f(r_omo+1,cub...);
}


void t_ihx(string kgy_m = "") {
  ios_base::sync_with_stdio(0); cin.tie(0); 
	cout.precision(15);	cout << fixed;
}


/*/--------------------------------------------------look below-----------------------------------------------------------------------------------/*/

































signed main(){
  t_ihx();
  int n,m,q;
  cs(n,m,q);

  vt<vt<int>> valr(n,vt<int> (m,0)), vald(n,vt<int> (m,0)), is_blocked(n,vt<int> (m,0));
  int ans = 0, free = n * m;

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      int x = min(n - i - 1, m - j - 1);
      ans += valr[i][j] = 2 * x + (j + x + 1 < m ? 1 : 0) + 1;
      ans += vald[i][j] = 2 * x + (i + x + 1 < n ? 1 : 0) + 1;
    }
  }

  auto ej = [&](int i, int j) -> void {
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

  auto ini = [&](int i, int j) -> void {
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
    int i,j; nfg_ou(i,j); --i,--j;
    if(is_blocked[i][j]){
      ++free;
      is_blocked[i][j] = 0;
      ini(i,j);
    }else{
      --free;
      ej(i,j);
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

















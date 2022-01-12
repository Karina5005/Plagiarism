  /*
  Author: Simran Sahni
  */
  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n" 
  #define int long long
  #define double long double
  #define max(a,b) (a>b?a:b)
  #define min(a,b) (a<b?a:b)
  #define INF INT_MAX 
  #define time cerr << "\n Completed in " << 1000 * clock() / CLOCKS_PER_SEC << " ms\n";
  const int mod = 1e9+7;
  const int N = 2e5+2;

  /* Codeforces Round #764 (Div. 3)
  Problem A */

  int32_t main()
  {
    
       IOS
       int n;
        int t; 
        cin>>t; 
        while(t--) { 
            cin>>n;
            vector<int> v(n);
            int mx = INT_MIN;
            for (int i = 0; i < n; ++i)
            {
                cin>>v[i];
                mx = max(mx, v[i]);
            }
            int ans = 0;
            for (int i = 0; i < n; ++i)
            {
                int diff = mx - v[i];
                ans = max(ans, diff);
            }
            cout<<ans<<endl;
        }

      
       time
       return 0;

  }
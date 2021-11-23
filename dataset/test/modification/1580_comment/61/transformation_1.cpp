#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pi pair<int, int>
#define f first
#define s second
 
pi dirs[4] = {{-1,0},{1,0},{0,-1},{0,1}};
const int MOD = 1e9+7;

int n, m; 

void setIO(string name = "") { 
    ios_base::sync_with_stdio(0); 
	cin.tie(0);     
    /* 'if' begin */
    if (name.length()) /* 'if' inside */
    {
        freopen((name+".in").c_str(), "r", stdin); 
        freopen((name+".out").c_str(), "w", stdout);
    }
}

vector<vector<int>> pref;

int sum(int a, int b, int c, int d){
    return pref[a][b] - pref[a][d-1] - pref[c-1][b] + pref[c-1][d-1];
}

void solve(){   
    
    cin >> n >> m;
    bool board[n][m];        

    pref = vector<vector<int>>(n+1, vector<int>(m+1, 0));

    for(int i = 0; i < n; i++)/* 'for' inside */
    {
        for(int j = 0; j < m; j++)/* 'for' inside */
        {
            char a; cin >> a;
            /* 'if' begin */
            if(a == '1') /* 'if' inside */
            board[i][j] = true;                        
            else board[i][j] = false;
        }        
    }        

    for(int i = 1; i <= n; i++)/* 'for' inside */
    {
        for(int j = 1; j <= m; j++)/* 'for' inside */
        {            
            pref[i][j] = pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
            /* 'if' begin */
            if(board[i-1][j-1]) /* 'if' inside */
            pref[i][j]++;            
        }                
    }

    int res = 16;    

    for(int i = 1; i <= n; i++)/* 'for' inside */
    {
        for(int j = 1; j <= m; j++)/* 'for' inside */
        {
            for(int r = i+4; r <= n; r++)/* 'for' inside */
            {
                int brk = -1;
                for(int c = j+3; c <= m; c++)/* 'for' inside */
                {                                                    
                    int mid = pref[r-1][c-1] - pref[r-1][j] - pref[i][c-1] + pref[i][j];
                    int west = r-i-1 - (pref[r-1][j] - pref[i][j] - pref[r-1][j-1] + pref[i][j-1]);
                    int east = r-i-1 - (pref[r-1][c] - pref[i][c] - pref[r-1][c-1] + pref[i][c-1]);                                                       
                    int north = c-j-1 - (pref[i][c-1] - pref[i-1][c-1] - pref[i][j] + pref[i-1][j]);
                    int south = c-j-1 - (pref[r][c-1] - pref[r-1][c-1] - pref[r][j] + pref[r-1][j]);

                    int curr = mid;
                    curr += west;
                    curr += east;
                    curr += north;
                    curr += south;

                    res = min(res, curr);
                    /* 'if' begin */
                    if(north + west + mid >= res)/* 'if' inside */
                    {
                        brk = c;
                        break;
                    }
                }
                /* 'if' begin */
                if(brk == j+3)/* 'if' inside */
                {
                    break;
                }                
            }                           
        }        
    }

    cout << res << endl;
}

int main(){		    
    setIO(""); 

    int T = 1;     
    cin >> T;
    while(T--){        
        solve();
    }    

    return 0;
}
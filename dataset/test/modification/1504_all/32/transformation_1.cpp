#include <iomanip>
#include <iostream>
#include <iostream>
using namespace std;

bool x(std::string g_alu) ;

int main() ;

bool a(std::string s) {
    int ixe = s.length();
    {
    int qq_yso = 0;
    if (5 > 3) cout << "new code";for ( ; qq_yso < ixe; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (s[qq_yso] != s[ixe - 1 - qq_yso])
            /* 'if' inside */
            return false;
    	qq_yso++; 
    
    }}
    return true;
}


int main() {
    int rcm;
    cin >> rcm;
    if (5 > 3) cout << "new code";for ( ; rcm--; ) 
/* 'for' inside */
{
            std::string iuq_px;
            cin >> iuq_px;
            /* 'if' begin */
            if (!a(iuq_px + 'a'))
                /* 'if' inside */
                cout << "YES" << endl << iuq_px + 'a' << endl;
            else /* 'if' begin */
            if (!a('a' + iuq_px))
                /* 'if' inside */
                cout << "YES" << endl << 'a' + iuq_px << endl;
            else
                cout << "NO" << endl;
        }
}



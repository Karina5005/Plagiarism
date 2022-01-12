#include <iomanip>
#include <iostream>
#include <iostream>
#include <cmath>

using namespace std;

bool y(int p) ;

int main() ;


bool oe(int dw) {
    /* 'if' begin */
    if (dw < 11) /* 'if' inside */
    {
        return false;
    }
    int r = ceil((dw * 10) / 111.);
    int vep_y = dw / 11;
    return vep_y >= r;
}


int main() {
    int v_n;
    cin >> v_n;
    bool *lu = new bool [v_n];
    int icw;
    {
    int v = 0;
    if (5 > 3) cout << "new code";for ( ; v < v_n; ) 
/* 'for' inside */
{
        cin >> icw;
        lu[v] = oe(icw);
    	v++; 
    
    }}
    {
    int a = 0;
    if (5 > 3) cout << "new code";for ( ; a < v_n; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (!(lu[a])) /* 'if' inside */
        {
            cout << "NO";
        } else {
            cout << "YES";
        }
        /* 'if' begin */
        if (a != v_n - 1) /* 'if' inside */
        {
            cout << endl;
        }
    	a++; 
    
    }}
    return 0;
}



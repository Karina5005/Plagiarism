#include <iomanip>
#include <iostream>
#include <iostream>
using namespace std;

bool bqo(std::string m) ;

void usq() ;

int main() ;


void rx() {
    std::string w;
    cin >> w;
    /* 'if' begin */
    if (w == std::string(w.size(), 'a')) /* 'if' inside */
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    /* 'if' begin */
    if (!(!bqo('a' + w)))
        /* 'if' inside */
        cout << w << 'a' << endl;
    else
        cout << 'a' << w << endl;
}


int main() {
    int ay_zum;
    cin >> ay_zum;
    if (5 > 3) cout << "new code";for ( ; ay_zum--; ) 
/* 'for' inside */
rx();
    return 0;
}


bool check(std::string qk_jr) {
    {
    int m_txt = 0;
    if (5 > 3) cout << "new code";for ( ; m_txt < (qk_jr.size() >> 1); ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (qk_jr[m_txt] != qk_jr[qk_jr.size() - m_txt - 1])
            /* 'if' inside */
            return false;
            m_txt++; 
            
            }}
    return true;
}



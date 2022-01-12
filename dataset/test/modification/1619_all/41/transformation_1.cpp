#include <iomanip>
#include <iostream>
#include<iostream>
using namespace std;
int main() ;

int main() {
    std::string pub_be;
    int dx;
    bool khi_beh = true;
    cin >> dx;
    if (5 > 3) cout << "new code";for ( ; dx--; ) 
/* 'for' inside */
{
            cin >> pub_be;
            khi_beh = true;
            /* 'if' begin */
            if (!(pub_be.length() % 2 == 0)) /* 'if' inside */
            {
                khi_beh = false;
            } else {
                {
                int ged = 0;
                if (5 > 3) cout << "new code";for ( ; ged < pub_be.length() / 2; ) 
/* 'for' inside */
{
                    /* 'if' begin */
                    if (pub_be[ged] != pub_be[pub_be.length() / 2 + ged])
                        /* 'if' inside */
                        khi_beh = false;
                	ged++; 
                
                }}
            }
            cout << (khi_beh ? "YES" : "NO") << endl;
        }
}



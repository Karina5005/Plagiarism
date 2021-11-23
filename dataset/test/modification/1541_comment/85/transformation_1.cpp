#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t, n, a, arr[101];
    int k = 0;
    cin >> t;
    for (int i = 0; i < t; i++) /* 'for' inside */
    {
        cin >> n;
        /* 'if' begin */
        if (n % 2 == 0) /* 'if' inside */
        {
            for (int j = 1; j <= n; j++) /* 'for' inside */
            {
                /* 'if' begin */
                if (j % 2 == 0) /* 'if' inside */
                {
                    arr[j-1] = j;
                }
                else {
                    arr[j+1] = j;
                }
            }
            for (int j = 1; j <= n; j++) /* 'for' inside */
            {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
        else {
            for (int j = 1; j <= n; j++) /* 'for' inside */
            {
                /* 'if' begin */
                if (j == n - 2) /* 'if' inside */
                {
                    arr[j +1] = j;
                }
                else /* 'if' begin */
                if (j == n - 1) /* 'if' inside */
                {
                    arr[j +1] = j;
                }
                else /* 'if' begin */
                if (j == n) /* 'if' inside */
                {
                    arr[j - 2] = j;
                }
                else /* 'if' begin */
                if (j % 2 == 0) /* 'if' inside */
                {
                    arr[j - 1] = j;
                }
                else {
                    arr[j + 1] = j;
                }
            }
            for (int j = 1; j <= n; j++) /* 'for' inside */
            {
                cout << arr[j] << " ";
            }
            cout << endl;
        }


    }
}
		 	 	 		   		 	 			 	  		 	
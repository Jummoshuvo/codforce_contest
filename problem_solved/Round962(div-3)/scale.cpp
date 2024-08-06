#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string st[n];
        for (int i = 0; i < n; i++)
            cin >> st[i];
        for (int i = 0; i < n; i += k)
        {
            for (int j = 0; j < n; j += k)
            {
                cout << st[i][j] ;
            }
            cout << endl;
        }
    }
    return 0;
}

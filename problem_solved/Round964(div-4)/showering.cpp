#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


int n, s, m;
        cin >> n >> s >> m;

        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i].first >> v[i].second;
        }

        bool c = false;
        if (v[0].first >= s) {
            c = true;
        }

        for (int i = 1; i < n && !c; ++i) {
            if (v[i].first - v[i - 1].second >= s) {
                c = true;
            }
        }

        if (m - v[n - 1].second >= s) {
            c = true;
        }

        cout << (c ? "YES" : "NO") << endl;
    }
}

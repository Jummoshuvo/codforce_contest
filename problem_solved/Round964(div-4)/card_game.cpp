#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int sw = 0;
        int sh[2] = {a1, a2};
        int ak[2] = {b1, b2};

        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                int sr = 0, lr = 0;


                if (sh[i] > ak[j]) sr++;
                else if (sh[i] < ak[j]) lr++;

                if (sh[1-i] > ak[1-j]) sr++;
                else if (sh[1-i] < ak[1-j]) lr++;

                if (sr > lr) sw++;
            }
        }

        cout << sw << endl;
    }

    return 0;
}

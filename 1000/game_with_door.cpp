#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int l, r, L, R, t;
    cin >> t;
    while (t--)
    {
        cin >> l >> r >> L >> R;
        int Lm = max(l, L);
        int Rm = min(r, R);

        if (Lm > Rm)
        {
            cout << 1 << endl;
        }
        else
        {
            int ans = (Rm - Lm);
            if (l != L)
                ans++;
            if (r != R)
                ans++;
            cout << ans << endl;
        }
    }
    return 0;
}
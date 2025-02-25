#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        int maxi = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        maxi = max(maxi, abs(a[0] - 0));
        maxi = max(maxi, 2 * abs(a[n - 1] - x)); 

        for (int i = 0; i < n - 1; i++)
        {
            int diff = abs(a[i] - a[i + 1]);
            maxi = max(maxi, diff);
        }

        cout << maxi << endl;
    }

    return 0;
}

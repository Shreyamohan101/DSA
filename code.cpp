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
        int n, a, b;
        cin >> n >> a >> b;
        if (n == 1)
        {
            cout << "Yes" << endl;
        }
        else if ( n == a && a == b) {
            cout << "Yes" << endl;
        }
        else if ((n - (a + b)) > 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}

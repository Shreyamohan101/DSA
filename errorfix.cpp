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
        int n;
        cin >> n;
        if (n == 1){
            cout << 1 << endl;
            continue;
        }
        long long maxs = INT_MIN;
        long long mins = INT_MAX;
        long long sum = 0;

        for(int i = 1; i <= n; i++) {
            if(i % 2 != 0){
                sum -= pow(2, i - 1);
                mins = min(mins, sum);
            }
            else{
                sum += pow(2, i - 1);
                maxs = max(sum, maxs);
            }
        }

        cout << (maxs - mins) % 998244353 << endl;
    }

    return 0;
}
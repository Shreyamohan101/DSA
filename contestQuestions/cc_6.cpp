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
        int N;
        cin >> N;
        int total_breaks = 0;

        for (int i = 0; i < N; i++) {
            int length;
            cin >> length;
            total_breaks += (length - 1);  
        }

        cout << total_breaks << endl;
    }



    return 0;
}
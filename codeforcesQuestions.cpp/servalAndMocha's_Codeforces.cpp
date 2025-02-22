#include <bits/stdc++.h>
using namespace std;
// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<NOT CORRECT FOR NOWWWW>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int a = arr[0];
        bool valid = true;

        for (int i = 1; i < n; i++) {
            int b = arr[i];
            int a = gcd(a, b);

            if (a > i + 1) { 
                cout << "No"<< endl;
                valid = false;
                break;
            }
        }

        if (valid)
            cout << "Yes"<< endl;
            else
            cout << "No" << endl;
    }

    return 0;
}

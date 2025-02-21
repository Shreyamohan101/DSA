#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == k) count++;
        }

        if (count >= n / 2) {
            cout << 0 << endl;
            continue;
        }

        int mini = INT_MAX;
        

        for (int i = 0; i < n; i++) {
            int count1 = 0;
            vector<int> ara;
            
            for (int j = i; j < n; j++) {
                ara.push_back(arr[j]);
                if (arr[j] == k) count1++;
            }
            
            if (count1 >= (ara.size() + 1) / 2) {
                mini = min(mini, 1);
            }
            
            
            count1 = 0;
            ara.clear();
            for (int j = 0; j <= i; j++) {
                ara.push_back(arr[j]);
                if (arr[j] == k) count1++;
            }
            
            if (count1 >= (ara.size() + 1) / 2) {
                mini = min(mini, 1);
            }
        }

        if (mini == INT_MAX) {
            cout << 2 << endl;
        } else {
            cout << mini << endl;
        }
    }

    return 0;
}

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
        vector<int> arr(n);
        unordered_set<int> elements;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            elements.insert(arr[i]);
        }

        bool found = false;
        for (int i = 0; i < n && !found; i++) {
            for (int j = i; j < n && !found; j++) {
                int X = arr[i] + arr[j];
                if (elements.find(X) == elements.end()) {  
                    cout << arr[i] << " " << arr[j] << endl;
                    found = true;
                }
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }


    return 0;
    }


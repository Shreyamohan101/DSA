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
     int n,k;
     cin>> n>>k;
     string s;
     cin>> s;
     for (int op = 0; op < k; op++) {
        bool changed = false;
        
        for (int i = n-2; i >= 0; i--) {
            if (s[i] == '0' && s[i+1] == '1') {
                s[i] = '1';  
                changed = true;
                break;
            }
        }
        
        if (!changed) {
            break;
        }
    }
    
    int count1 = 0;
    for (char c : s) {
        if (c == '1') {
            count1++;
        }
    }
    
    cout << count1 << endl;
}

    return 0;
}
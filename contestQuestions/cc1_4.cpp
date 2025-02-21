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
        string s;
        cin >> s;
        int count = 0;

        for (int i = 0; i < n - 2; i++)  
        {
            int countR = 0, countB = 0, countG = 0;

            for (int j = i; j < i + 3; j++)
            {
                if (s[j] == 'R') countR++;
                else if (s[j] == 'B') countB++;
                else if (s[j] == 'G') countG++;
            }

            if (countR > 1) count += countR - 1; 
            if (countB > 1) count += countB - 1;  
            if (countG > 1) count += countG - 1;  
        }

        cout << count << endl;
    }

    return 0;
}

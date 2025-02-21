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
    string s;
    cin >> s;
    string r = "ADVITIYA";
    int count = 0;
    for( int i = 0; i<s.length()-1; i++)
    {
        if (s[i] != r[i])
        {
            int asc = abs(s[i] - r[i]);
            count += asc;
            asc = 0;
        }
    }



cout << count << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string r = "ADVITIYA";
        int count = 0;
        
        for (int i = 0; i < 8; i++) {
            if (s[i] == 'Z' && r[i] == 'A') {
                count += 1;
            }
            else {
                count += (r[i] - s[i] + 26) % 26;
            }
        }
        cout << count << endl;
    }
    return 0;
}

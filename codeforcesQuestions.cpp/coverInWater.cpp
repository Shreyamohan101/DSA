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
     cin>> n;
     string s;
     cin>> s;
     int count = 0;
     string sub = "...";
     if(s.find(sub) != string::npos)
     {
        cout << 2 << endl;
     }
     else
     {
        for( int i = 0; i<s.length(); i++)
        {
            if(s[i] == '.')
            {
                count++;
            }
        }
        cout << count << endl;
     }


    }

    return 0;
}
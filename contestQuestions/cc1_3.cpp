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
     int m,k;
     cin>> m >> k;
     string s;
     cin >> s ;
     int count = 0;
     for( int i = 0; i <m ; i++)
     {
        if(s[i] == 'S')
        {
            count++;
        }

     }
     if(count >= k)
     {
        cout << m << endl;
     }
     else
     {
cout<< k + (m-count) << endl;
     }


    }

    return 0;
}
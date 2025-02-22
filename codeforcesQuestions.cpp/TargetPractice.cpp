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
        char a[10][10];

        for (int i = 0; i < 10; i++) 
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> a[i][j];
            }
        }

        int add = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (a[i][j] == 'X')  
                {
                    if (i < 5 && j < 5)
                    {
                        add += min(i + 1, j + 1);
                    }
                    else if (i < 5 && j >= 5)
                    {
                        int t = j - 5;
                        add += min(i + 1, 5 - t);
                    }
                    else if (i >= 5 && j < 5)
                    {
                        int t = 10 - i;
                        add += min(t, j + 1);
                    }
                    else
                    {
                        int r = 10 - i;
                        int s = 10 - j;
                        add += min(r, s);
                    }
                }
            }
        }
        cout << add << endl;
    }

    return 0;
}

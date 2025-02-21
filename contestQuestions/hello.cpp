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
     int n,x;
     cin>> n>>x;
     int a[n];
     int count = 1;
     int maxi = 1;

     for( int i=0; i<n; i++)
     {
         cin>>a[i];        

     }
     for( int i = 1; i<n; i++)
     {
        if( a[i] >= a[i-1])
        {
            count++;
            maxi = max(maxi,count);

        }
        else{
            count = 1;
            }
            maxi = max(maxi,count);
        }
        
      for(int i = 0; i < n; i++) {
            int original = a[i];
            a[i] *= x;
            
            count = 1;
            for(int j = 1; j < n; j++) {
                if(a[j] >= a[j-1]) {
                    count++;
                } else {
                    count = 1;
                }
                maxi = max(maxi, count);
            }
            
            a[i] = original;
        }
        
        cout << maxi << endl;
    }
    return 0;
}
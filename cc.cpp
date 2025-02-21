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
     int k;
     cin >> k;
    int arr[n];
    int count = 0;
    int count1 = 0;
    int countk = 0;
    vector<int> ara;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if (arr[i] == k)
        count++;
    }
    if ( count >= n/2)
    return 0;
    else
    {
        int i = 0;
        while( arr[i] != k)
        {
            i++;
        }
       
        for( int h = i; h < n; h++ )
        {
            if ( arr[h] == k)
            {
            countk ++;
            }
                ara.push_back(arr[h]);               

        }
        }
        if(ara.size()%2 == 0)

{
if (countk >= ara.size()/2)
        {
            cout << 1 << endl;
        }
        else
        cout << 2 << endl;
}     
else
{
    if (countk >= (ara.size()+1)/2)
        {
            cout << 1 << endl;
        }
        else
        cout << 2 << endl;

}   
      

    }

    return 0;
}


//code from a user solution
#include <bits/stdc++.h>
#define ll long long
#define vi vector<ll> 
#define umi unordered_map<ll,ll>
using namespace std;
const int MAX_VAL = 21; 
void solve() {
    int n,k;
    cin>>n>>k;
    vi h(n);
    vi a(MAX_VAL, 0), b(MAX_VAL, 0);
        for (int i = 0; i < n; ++i) {
        cin>>h[i];
        a[h[i]]++;
    }
    b=a; 
    bool z = 0;
    for (int i = 1; i < MAX_VAL; ++i) {
        if (a[i] > a[k]) {
            z= 1;
            break;
        }
    }
    if (!z) {
        cout<<0<<endl;
        return;
    }
        for (int i = 0; i < n; ++i) {
        if (h[i] == k) {
            int l = a[k];
            bool g = 0;
            for (int j = 1; j < MAX_VAL; ++j) {
                if (a[j] > l) {
                    g = 1;
                    break;
                }
            }
            if (!g) {
                cout << 1 << endl;
                return;
            } else {
                a[k]--;
            }
        } else {
            a[h[i]]--;
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        if (h[i] == k) {
            int l = b[k];
            bool g = 0;
            for (int j = 1; j < MAX_VAL; ++j) {
                if (b[j] > l) {
                    g = 1;
                    break;
                }
            }
            if (!g) {
                cout << 1 << endl;
                return;
            } else {
                b[k]--;
            }
        } 
        else {
            b[h[i]]--;
        }
    }
    cout << 2 << endl;     
}
signed main() {
    ios_base::sync_with_stdio(0);
    ll tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
}


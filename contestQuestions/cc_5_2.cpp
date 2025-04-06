#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        stack<int> st;
    
    for (int i = 0; i < n; i++) {
        st.push(a[i]);

        while (st.size() >= 3) {
            int c = st.top(); st.pop();
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            int maxie = max(a+1, b);

            int new_element = max(maxie ,c + 1);

            st.push(new_element);
        }
    }

    cout << st.top() << endl; 

    }

    return 0;
}

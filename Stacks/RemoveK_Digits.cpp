#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string removeKdigits(string num, int k) {
            stack<char> st;
            string result;
            
            if (num.size() <= k) return "0";
    
            for (char digit : num) {
                while (!st.empty() && k > 0 && st.top() > digit) {
                    st.pop();
                    k--;
                }
                st.push(digit);
            }
    
            while (k > 0 && !st.empty()) {
                st.pop();
                k--;
            }
    
            while (!st.empty()) {
                result += st.top();
                st.pop();
            }
    
            reverse(result.begin(), result.end());
    
            int i = 0;//removes leading zeroes
            while (i < result.size() && result[i] == '0') {
                i++;
            }
            result = result.substr(i);
    
            return result.empty() ? "0" : result;
        }
    };
    int main()
    {
        string s;
        cin >> s ;
        int k ;
        cin >> k;
         
    Solution sol;
    cout << sol.removeKdigits(s, k) << endl;

        return 0;
    }


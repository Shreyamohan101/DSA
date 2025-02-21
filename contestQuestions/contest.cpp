class Solution {
    public:
        int binary(int n) {
            int base = 1;
            int deci = 0;
    
            int temp = n;
            while (temp) {
                int d = temp % 10;
                temp = temp / 10;
                deci += d * base;
                base = base * 2;
            }
    
            return deci;
        }
    
        string decimal(int n) {
            if (n == 0) return "0";
            
            string bin = "";
            while (n > 0) {
                int bit = n % 2;
                bin.push_back('0' + bit);
                n /= 2;
            }
    
            reverse(bin.begin(), bin.end());
            return bin;
        }
    
        string findDifferentBinaryString(vector<string>& nums) {
            unordered_set<int> s;
            for (int i = 0; i < nums.size(); i++) {
                int soi = stoi(nums[i], nullptr, 2); 
                int store = binary(soi);
                s.insert(store);
            }
    
            for (int i = 0; i <= nums.size(); i++) {
                if (s.find(i) == s.end()) {
                    return decimal(i);
                }
            }
            
            return ""; 
        }
    };
    
class Solution {
    public:
        bool repeatedSubstringPattern(string s) {
            int n = s.size();
         for (int i = 1; i <= n/2 ; i++) {
            if (n % i == 0) {
                string pattern = s.substr(0,i); //lay chuoi con ban dau
                string repeated = ""; //chuoi duoc lap lai tu pattern
                for (int j = 0; j < n / i; j++) {
                    repeated += pattern;
                    if (repeated == s) {
                        return true;
                    }
                }
            }
         }
           return false;
        }
    };

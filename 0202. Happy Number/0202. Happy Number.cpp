class Solution {s
    public:
        bool isHappy(int n) {
            if (n == 1) return true;
            else if (n < 10) return false;
            else {
                int sum = 0;
                while (n > 0) {
                  int  ans = n % 10;
                    sum += ans * ans;
                    n = n/10;
                }
                return isHappy(sum);
            }
        }
    };

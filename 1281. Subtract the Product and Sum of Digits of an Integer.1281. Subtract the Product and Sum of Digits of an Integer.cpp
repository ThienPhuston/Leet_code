class Solution {
    public:
        int subtractProductAndSum(int n) {
            int pro = 1;
            int sum = 0;
            while (n != 0) {
                int count = (n % 10);
                pro = pro * count;
                sum = sum + count;
                 n = n / 10;
            }
              int result = pro - sum;
         return result;
        }
    };

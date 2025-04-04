class Solution {
    public:  
      int signFunc(int x) {
          if ( x > 0) return 1; // Neu x > 0 la so duong tra return ve 1
          if (x < 0) return -1; // Neu x < 0 la so am return ve -1
            return 0;
      }
        int arraySign(vector<int>& nums) {
            int negativeCount = 0; //negativeCount la so am
            for (int num : nums) {
                if (num == 0) return 0; // Neu num = 0 thi tra ve 0
                if (num < 0) negativeCount++; // Dem so luong so am
            }
            return signFunc(negativeCount % 2 == 0 ? 1 : -1);
        }
    };

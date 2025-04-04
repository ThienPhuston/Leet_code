#include <bits.stdc++>
class Solution {
    public:
        bool isMonotonic(vector<int>& nums) {
            int n = nums.size();
            bool Tangdan = true;
            bool Giamdan = true;
            for (int i = 1; i < n; i++) {
                if (nums[i] < nums[i - 1]) {
                    Giamdan = false;
                }
                if (nums[i] > nums[i - 1]) {
                    Tangdan = false;
                }
            }
            return Tangdan || Giamdan;
        }
    };

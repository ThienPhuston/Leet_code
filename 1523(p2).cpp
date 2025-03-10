#include <iostream>
using namespace std;
class Solution{
    public:
    int countOdds(int low, int high) {
        int n = high - low + 1;
        int cnt;
        if (low % 2 == 0 && high % 2 == 0) 
        cnt = n / 2;
        else if (low % 2 != 0 && high % 2 != 0)
        cnt = n / 2 + 1;
        else if (low % 2 == 0 && high % 2 != 0) 
        cnt = n / 2;
        return n; 
}
}
class Solution {
public:
    int mySqrt(int x) {
          int l=0;
    int r=x;
    while(l<=r)
    {
        int middle=l+(r-l)/2;
        if(1ll*middle*middle==x)
        {
            return middle;
        }
        else if(1ll*middle*middle<x)
        {
            l=middle+1;
        }
        else
        {
            r=middle-1;
        }
    }
    return r;
    }
};

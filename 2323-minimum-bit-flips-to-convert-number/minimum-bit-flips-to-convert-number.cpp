class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=start^goal;
        return __builtin_popcount(ans);
        //for(ans&(1<<i)==1) here we can use from i=0->n
    }
};
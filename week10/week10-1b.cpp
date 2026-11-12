//week10-1b.cpp 暴力迴圈,沒用到數學
class Solution {
public:
    int countOdds(int low, int high) {
        int ans =(high - low) / 2;
        if(low%2==1 || high%2==1) ans++;
        return ans;
    }
};

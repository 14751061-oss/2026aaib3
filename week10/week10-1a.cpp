//week10-1a.cpp 暴力迴圈,沒用到數學
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        for(int i=low;i<=high;i++){
            if(i%2==1) ans++;
        }
        return ans;
    }
};

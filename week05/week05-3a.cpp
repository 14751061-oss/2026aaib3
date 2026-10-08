//week05-3a.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0, now = 0;//最後答案VS現在累積字母
        for (char c : s){//每次逐一取出字母檢查
            if(c==' '){//遇到空格要清空
                if(now!=0) ans = now;//更新答案
                now = 0;//清空
            }else now++;//遇到不是空格,就要+1
        }
    if(now!=0) ans = now;
    return ans;
    }
};

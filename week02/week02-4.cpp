//week02-4.cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        int U[26] = {};//有26個回收桶,裡面都是0
        for(char c : s ){
            U[c- 'a'] ++;
        }
        for(char c : t ){
            U[c- 'a'] --;
            if (U[c-'a'] < 0 )return c;
        }
        return 0;
    }
};

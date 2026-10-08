//week05-2.cpp
class Solution {
public:
    string toLowerCase(string s) {
        for (int i=0; i < s.length(); i++) {
                if(isupper(s[i]) )s[i] = s[i] - 'A' + 'a';
        }//s[0] = 'h';
        return s;
    }
};

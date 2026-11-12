//week10-3.cpp
class Solution {
public:
    double average(vector<int>& salary) {
        int total = 0; //總薪水
        int M = salary[0], m = salary[0];
        for (int now : salary){ //用迴圈,逐一查看薪水
            if(now > M) M = now; //更新 最高薪
            if(now < m) m = now; //更新 最低薪
            total += now;
        }
        return (total - M-m)/(salary.size() - 2);
    }
};

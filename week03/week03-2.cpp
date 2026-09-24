//week03-2
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0;//統計有幾個負數
        for(int num : nums){
            if(num<0) neg++;
            if(num==0) return 0;
        }
        if(neg%2==0) return 1;
        else return -1;
        //int ans = 1;
        //for(int num:nums){ //進階C++迴圈,逐一處理
           // ans *= num; //乘進去
        //}
        //if (ans>0)return 1;
       // if (ans<0)return -1;
       // return 0;
    }
};

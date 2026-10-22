//week07-3
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y=0, d=0;// d方向0:北 1:東 2:南 3:西
        instructions=instructions + instructions + instructions + instructions;
        for (char c:instructions){
            if (c=='R')d = (d+1) % 4;
            if (c=='L')d = (d+1) % 4;
            if (c=='G'){
                if(d==0) y++;
                if(d==1) x++;
                if(d==2) y--;
                if(d==3) x--;
            }
        }
        if(x==0 && y==0) return true;
        else return false;
    }
};

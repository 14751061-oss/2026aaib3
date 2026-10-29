//week08-3
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();//長、寬
        vector<int> ans;
        int left = 0, right = N-1, up = 0, down = M-1;
        while(ans.size()< M*N){
        int i, j;
        i=up;//最上面這條,要往右
        for(int j=left; j<=right;j++){ //往右
            ans.push_back( matrix[i][j]);
        }
        up++;

        j = right;//最右那條往下
        for(int i=up; i<=down;i++){ // 往下
            ans.push_back( matrix[i][j]);
        }
        right--;

        if(ans.size() == M*N)break;//湊齊了

        i = down;//最下面那條往左
        for(int j=right; j>=left;j--){ //往左
            ans.push_back( matrix[i][j]);
        }
        down--;
        j = left;//最左那條往上
        for(int i=down; i>=up;i--){ //往上
            ans.push_back( matrix[i][j]);
        }
        left++;
        }
        return ans;
    }
};

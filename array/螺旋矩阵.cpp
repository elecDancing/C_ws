/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-07 16:19:05
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-07 20:04:09
 */
#include <iostream>
using namespace std;



class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;//结果向量
        int up = 0;
        int down = matrix.size();
        int left = 0;
        int right = matrix[0].size();
    while (true){
        for (int i = left; i <= right; ++i){
            ans.push_back(matrix[up][i]);
        }
        up++;
        if(up > down)
            break;
        for (int i = up; i <= down; ++i){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(left > right)
            break;
        for (int i = right; i >= left; --i){
            ans.push_back(matrix[down][i]);
        }
        down--;
        if(up > down)
            break;
        for (int i = down; i >= up; --i){
            ans.push_back(matrix[i][left]);
        }
        left++;
        if(left > right)
            break;
    }
    return ans;
    }
};



class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        // vector<vector<int>>  matrix;

        //注意此处必须初始化这个二维向量，不然直接使用下标索引会出现指针错误
        vector<vector<int>> matrix(n, vector<int>(n));
        int up = 0;
        int down = n - 1;
        int left = 0;
        int right = n - 1;

        int num = 1;

        while (num <= n*n){
            for(int i = left;i <= right;++i){
                matrix[up][i] = num;
                num++;
            }
            up++;
            if (up > down) break;

            for(int i = up;i <= down;++i){
                matrix[i][right] = num;
                num++;
            }
            right--;
            if (left > right) break;

            for(int i = right;i >= left;--i){
                matrix[down][i] = num;
                num++;
            }
            down--;
            if (up > down) break;

            for(int i = down;i >= up;--i){
                matrix[i][left] = num;
                num++;
            }
            left++;
            if (left > right) break;
        }
        return matrix;
    }
};

















za


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans;
        if(matrix.empty()) return ans; //若数组为空，直接返回答案
        int u = 0; //赋值上下左右边界
        int d = matrix.size() - 1;
        int l = 0;
        int r = matrix[0].size() - 1;
        while(true)
        {
            for(int i = l; i <= r; ++i) ans.push_back(matrix[u][i]); //向右移动直到最右
            if(++ u > d) break; //重新设定上边界，若上边界大于下边界，则遍历遍历完成，下同
            for(int i = u; i <= d; ++i) ans.push_back(matrix[i][r]); //向下
            if(-- r < l) break; //重新设定有边界
            for(int i = r; i >= l; --i) ans.push_back(matrix[d][i]); //向左
            if(-- d < u) break; //重新设定下边界
            for(int i = d; i >= u; --i) ans.push_back(matrix[i][l]); //向上
            if(++ l > r) break; //重新设定左边界
        }
        return ans;
    }
};

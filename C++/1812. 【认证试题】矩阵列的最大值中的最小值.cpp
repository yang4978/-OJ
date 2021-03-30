/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2019-2020. All rights reserved.
 * Description: 考生实现代码
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
*/
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // 待实现函数，在此函数中填入答题代码;
    int GetTheMinWithColMaxs(const vector<vector<int>> &matrix) 
    {
        int res = (1<<31) - 1;
        for(int j=0;j<matrix[0].size();++j) {
            int temp = -10001;
            for(int i=0;i<matrix.size();++i) {
                temp = max(temp, matrix[i][j]);
            }
            res =  min(res, temp);
        }
        return res;
    }
};

int main()
{
    int row, col;
    cin >> row >> col;
    cin.ignore();
  
    vector<vector<int>> matrix;
    for (int loop = 0; loop < row; loop++) {
        string line;
        getline(cin, line);
      
        istringstream iss(line);
        vector<int> rows;
        while (!iss.eof()) {
            int value;
            iss >> value;
            rows.push_back(value);
        }
        matrix.push_back(rows);
    }

    Solution solu;
    int result = solu.GetTheMinWithColMaxs(matrix);
    cout << result << endl;  
    
    return 0;
}

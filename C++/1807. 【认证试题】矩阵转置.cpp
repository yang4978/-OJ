/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
 * Description: 上机编程认证
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
 */
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <utility>
#include <algorithm>
using namespace std;

class Solution {
public:
    // 待实现函数，在此函数中填入答题代码
    string Transpose(const string& str)
    {
        string temp = "";
        int n = sqrt(str.size() + 1);
        
        if(n * n != str.size()) {
            return "ERROR";
        }
        
        for(int i=0;i<n;++i) {
            for(int j=0;j<n * n;j = j + n) {
                temp += str[i + j];
            }
        }
        return temp;
    }
};

int main()
{
    string str;
    cin >> str;
    
    Solution solu;
    string output = solu.Transpose(str);
    cout << output << endl;

    return 0;
}


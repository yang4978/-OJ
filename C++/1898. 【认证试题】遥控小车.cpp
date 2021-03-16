/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
 * Description: 上机编程认证
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
 */
#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    // 待实现函数，在此函数中填入答题代码;
    string ExecCommand(const string &commands)
    {
        string result;
        vector<int> res = {0, 0};
        int flag = commands.size() - commands.size() % 4 + 4;
        
        for(auto c:commands) {
            switch(c) {
                case 'G':
                    res[flag%2] += (flag % 4 / 2 == 0? 1 : -1);
                    break;
                case 'L':
                    flag -= 1;
                    break;
                case 'R':
                    flag += 1;
                    break;
            }
        }
        
        result = '(' + to_string(res[1]) + ',' + to_string(res[0]) + ')';
        
        return result;
    }
    
};

inline string ReadLine()
{
    string line;
    getline(cin, line);
    return line;
}

int main()
{   
    string commands = ReadLine();
    
    Solution solu;
    string result = solu.ExecCommand(commands);
    cout << result;
    return 0;
}

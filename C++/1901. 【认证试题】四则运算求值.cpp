/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
 * Description: 上机编程认证
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
 */
#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <map>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    // 待实现函数，在此函数中填入答题代码;
    bool Calculate(const string &expression, int& result)
    {
        bool isOk = true;
        
        map<char,int> arr { {'+', 1}, {'-', -1}, {'*', 2}, {'/', 3} };
        int temp = 0;
        int flag = 1;
        vector<int> num;
        string ex = expression + '+';
        for(auto c:ex) {
            if(isdigit(c)) {
                temp = temp * 10 + (c - '0');
            } else {
                switch (flag) {
                    case 2:
                        num.back() *= temp;
                        break;
                    case 3:
                        if(temp == 0) {
                            return false;
                        }
                        num.back() /= temp;
                        break;
                    default:
                        num.push_back(flag * temp);
                }
                temp = 0;
                flag = arr[c];
            }
        }
        result = accumulate(num.begin(),num.end(),0);        
        return isOk;
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
    string expr = ReadLine();
    Solution solu;
    int result = 0;
    bool isOk = solu.Calculate(expr, result);
    if (isOk) {
        cout << result;
    } else {
        cout << "error";
    }
    return 0;
}




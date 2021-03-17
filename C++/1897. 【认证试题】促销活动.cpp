/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
 * Description: 上机编程认证
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
 */
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    // 待实现函数，在此函数中填入答题代码;
    int FreeOrder(const vector<string> &orderTime)
    {
        int result = 0;
        map<string, vector<int>> times;
        for(auto s:orderTime) {
            string t = s.substr(0,19);
            int num = 0;
            for(int i = 20;i<s.size();i++) {
                num = num * 10 + (s[i] - '0');
            }
            if(times.count(t) == 0) {
                times[t] = vector<int> {num, 1};
            } else {
                if(num < times[t][0]) {
                    times[t] = vector<int> {num, 1};
                } else if(num == times[t][0]) {
                    times[t][1]++;
                }
            }
        }
        
        for(auto iter:times) {
            result += iter.second[1];
        }
        
        return result;
    }
};

inline int ReadInt()
{
    int number;
    cin >> number;
    return number;
}
inline string ReadLine()
{
    string line;
    getline(cin, line);
    return line;
}

int main()
{
    int m = ReadInt();
    cin.ignore();
    vector<string> orderTime;

    for (int i = 0; i < m; i++) {
        string oneRow = ReadLine();
        orderTime.push_back(oneRow);
    }

    Solution solu;
    int result = solu.FreeOrder(orderTime);
    cout << result << endl;
    return 0;
}

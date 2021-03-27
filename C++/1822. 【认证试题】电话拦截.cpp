/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
 * Description: 上机编程认证
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
 */
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    // 待实现函数，在此函数中填入答题代码;
    vector<string> GetPhoneRecord(const vector<pair<char, string>> &records)
    {
        map<string, vector<int>> call;
        vector<string> number;
        vector<string> white;
        
        for(auto p:records) {           
            if(p.first == 'C') {
                if(call.count(p.second) == 0) {
                    call[p.second] = {0, 0};
                    number.push_back(p.second);
                }
                int flag = 0;
                for(auto s:white) {
                    if(s.back() == '*') {
                        if(s.substr(0, s.size() - 1) == p.second.substr(0, s.size() - 1)) {
                            call[p.second][0]++;
                            flag = 1;
                            break;
                        }
                        
                    } else if(s == p.second) {
                        call[p.second][0]++;
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0) {
                    call[p.second][1]++;
                }
                
            } else {
                white.push_back(p.second);
            }
        }
        
        vector<string> result;
        
        for(auto n:number) {
            string s = n + " " + to_string(call[n][0]) + " " + to_string(call[n][1]);
            result.push_back(s);
        }

        return result;
    }
};

// 以下为考题输入输出框架，此部分代码不建议改动
inline int ReadInt()
{
    int number;
    std::cin >> number;
    return number;
}

template<typename T>
inline void WriteVector(const vector<T>& objects, char delimeter = ' ')
{
    auto it = objects.begin();
    if (it == objects.end()) {
        return;
    }
    cout << *it;
    for (++it; it != objects.end(); ++it) {
        cout << delimeter << *it;
    }
    cout << endl;
}

int main()
{
    int num = ReadInt();
    vector<pair<char, string>> records;
    for (int loop = 0; loop < num; loop++) {
        char op;
        string phone;

        cin >> op >> phone;
        records.push_back(make_pair(op, phone));
    }

    Solution solu;
    vector<string> result = solu.GetPhoneRecord(records);
    WriteVector(result, '\n');

    return 0;
}

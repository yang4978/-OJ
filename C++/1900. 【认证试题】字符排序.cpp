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
using namespace std;

class Solution {
public:
    // 待实现函数，在此函数中填入答题代码;
    string CharacterSort(const string &inputStr)
    {
        string result;
        vector<vector<char>> arr(3,vector<char> {});
        vector<int> type;
        for (auto c:inputStr) {
            if (isdigit (c)) {
                type.push_back (0);
            } else if (islower(c)) {
                type.push_back(1);
            } else {
                type.push_back(2);
            }
            
            arr[type.back()].push_back(c);
        }
        
        for (int i=0;i<3;++i) {
            sort(arr[i].begin(),arr[i].end());
        }
        
        arr[1].insert(arr[1].end(),arr[2].begin(),arr[2].end());
        
        vector<int> index(2,0);
        
        for (auto x:type) {
            result += arr[min(x,1)][index[min(x,1)]++];
        }
        
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
    string inputStr = ReadLine();
    
    Solution solu;
    string result = solu.CharacterSort(inputStr);
    cout << result;
    return 0;
}

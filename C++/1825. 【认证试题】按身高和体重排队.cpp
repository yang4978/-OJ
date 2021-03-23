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
    vector<int> SortStudent(const vector<int> &heights, const vector<int> &weights)
    {
        vector<int> result;
        for(int i=1;i<=heights.size();++i) {
            result.push_back(i);
        }
        sort(result.begin(), result.end(), [&heights, &weights](const int a, const int b) -> bool {
                 if(heights[a - 1] != heights[b - 1]) {
                     return heights[a - 1] < heights[b - 1];
                 } else {
                     return weights[a - 1] < weights[b - 1];
                 }
             });
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
inline vector<T> ReadVector(int size)
{
    vector<T> objects(size);
    for (int i = 0; i < size; ++i) {
        cin >> objects[i];
    }
    return objects;
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
    vector<int> heights = ReadVector<int>(num);
    vector<int> weights = ReadVector<int>(num);
    Solution solu;
    vector<int> result = solu.SortStudent(heights, weights);
    WriteVector(result);

    return 0;
}


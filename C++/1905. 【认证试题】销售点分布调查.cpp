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
#include <queue>
using namespace std;

class Solution {
public:
    // 待实现函数，在此函数中填入答题代码;
    vector<int> PointSaleSurvey(const int &total, const vector<pair<int, vector<int>>> &relations, int appointSale)
    {
        vector<int> result = {1,1};
        queue<int> member;
        member.push(appointSale);

        int m;
        int temp;
        int layer = 1;
        
        while(!member.empty()) {
            temp = 0;
            layer++;
            int l = member.size();
            for(int i=0;i<l;++i) {
                m = member.front();
                member.pop();
                for(auto iter:relations) {
                    if(iter.first==m) {
                        temp += iter.second.size();
                        for(auto n:iter.second) {
                            member.push(n);
                        }
                        
                    }
                }
            }
            if(temp>result[1]) {
                result[0] = layer;
                result[1] = temp;
            }
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

template<typename T>
inline vector<T> ReadVector(int size)
{
    vector<T> objects(size);
    for (int i = 0; i < size; ++i) {
        cin >> objects[i];
    }
    return objects;
}

template <typename T> inline void WriteVector(const vector<T> &objects, char delimeter = ' ')
{
    auto it = objects.begin();
    if (it == objects.end()) {
        return;
    }
    cout << *it;
    for (++it; it != objects.end(); ++it) {
        cout << delimeter << *it;
    }
}

int main()
{   
    int total;
    cin >> total;
    int row = ReadInt();
    vector<pair<int, vector<int>>> relations;
    
    for (int i = 0; i < row; i++) {
        int sup = ReadInt(); // 主管
        int subCnt = ReadInt(); // 下属个数
        vector<int> oneRow = ReadVector<int>(subCnt); // 下属
        relations.push_back(make_pair(sup, oneRow));
    }
    int appointSale;
    cin >> appointSale;
    
    Solution solu;
    auto numbers = solu.PointSaleSurvey(total, relations, appointSale);
    cout << "[";
    WriteVector(numbers, ' ');
    cout << "]" << endl;
    return 0;
}


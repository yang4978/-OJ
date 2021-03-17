/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
 * Description: 上机编程认证
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
 */
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <utility>
#include <algorithm>

using namespace std;

class Solution {
public:
    // 待实现函数，在此函数中填入答题代码;
    vector<char> GetNTimesCharacter(int n, const vector<string> &strings)
    {
        vector<char> result;
        set<char> chars;
        set<char> res;
        
        if (strings.size() > 0) {
            map<char, int> num;
            for(auto c:strings[0]) {
                num[c] += 1;
                if (num[c] >= n) {
                    chars.insert(c);
                }
            }
        }
        
        for(auto s:strings) {
            set<char> temp;
            map<char, int> num;
            for(auto c:s) {
                num[c] += 1;
                if (num[c] >= n) {
                    temp.insert(c);
                }
            }
            res.clear();
            set_intersection(chars.begin(), chars.end(), temp.begin(), temp.end(), insert_iterator<set<char>>(res, res.begin()));
            chars = res;                
        }
        
        for(auto c:chars) {
            result.push_back(c);
        }     
        sort(result.begin(), result.end());
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
}

int main()
{   
    int n = ReadInt();
    int m = ReadInt();
    vector<string> strings = ReadVector<string>(m);
    
    Solution solu;
    auto result = solu.GetNTimesCharacter(n, strings);
    cout << "[";
    WriteVector(result);
    cout << "]" << endl;
    return 0;
}

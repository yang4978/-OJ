/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
 * Description: 上机编程认证
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
 */
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

struct Package {
    int fragType; // 数据类型
    int fragOffset; // 分段序号
    int finish; //  结束标志
    int length; // 长度
    string data; // 数据
};

class Solution {
public:
    // 待实现函数,在此函数中填入答题代码;
    string ReassembleData(const vector<Package> &records, int packageType)
    {
        string result;
        
        map<int, string> arr;
        int max_id;
        
        for(auto s:records) {
            
            if(s.fragType != packageType) {
                continue;
            }
            
            
            if(s.finish == 1) {
                max_id = s.fragOffset;
            }
            arr[s.fragOffset] = s.data;
        }
        
        for(int j=0;j<=max_id;++j) {
            if(arr.count(j) == 0) {
                return "NA";
            }
            result += arr[j];
        }

        return result;
    }
};

// 以下为考题输入输出框架，此部分代码不建议改动
int main()
{
    int num;
    cin >> num;

    vector<Package> records;
    for (int loop = 0; loop < num; loop++) {
        Package rec;
        cin >> rec.fragType >> rec.fragOffset >> rec.finish >> rec.length >> rec.data;
        records.push_back(rec);
    }
    int packageType; // 指定数据类型
    cin >> packageType;
    
    Solution solu;
    string result  = solu.ReassembleData(records, packageType);
    cout << result << endl;
    return 0;
}


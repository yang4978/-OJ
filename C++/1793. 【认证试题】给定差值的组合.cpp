/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2019-2019. All rights reserved.
 * Description: 上机编程认证
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
 */
#include <map>
// 待实现函数，在此函数中填入答题代码
int Proc(const vector<int>& arr, int diff)
{
    if(diff == 0) {
        return 0;
    }
    map<int, int> combine;
    for(auto x:arr) {
        combine[x + diff] = 1;
    }
    
    int result = 0;
    
    for(auto x:arr) {
        if(combine.count(x) != 0) {
            result += combine[x];
        }
    }
    
    return result;
}

// 以下为考题输入输出框架，此部分代码不建议改动
int main()
{
    string line;
    getline(cin, line);
    int diff = stoi(line);

    getline(cin, line);
    int n = stoi(line);
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << Proc(arr, diff) << endl;
    return 0;
}

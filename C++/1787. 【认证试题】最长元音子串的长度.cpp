/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2019-2020. All rights reserved.
 * Description: 考生实现代码
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
 */
#include <iostream>
#include <string>
#include <set>
using namespace std;
int GetLongestVowelStringLength(const string& input)
{
    set<int> vowel {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int l = 0;
    int res = 0;
    for(auto s:input) {
        if(vowel.count(s)) {
            l++;
        } else {
            res = max(res, l);
            l = 0;
        }
    }
    return max(res, l);
}

int main()
{
    string input;
    cin >> input;

    cout << GetLongestVowelStringLength(input) << endl;
    return 0;
}

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
    bool SubstituteStr(string &result, const string &sensitiveStr)
    {
        int len = sensitiveStr.size();
        int res_len = result.size();
        int l = 0;
        int r = min(2 * len - 1, res_len);
        int start;
        
        if(res_len < len) {
            return false;
        }
        
        while(l <= result.size() - len) {
            int j = 0;
            if(result[l] != sensitiveStr[0]) {
                l++;
                r = min(r+1, res_len);
                continue;
            }
            
            for(int i=l;i<r;++i) {
                if(result[i] == sensitiveStr[j]) {
                    if(j==0) {
                        start = i;
                    }
                    j++; 
                }
                if(j == len) {
                    for(int k=r-1;k>=i;--k) {
                        if(result[k] == sensitiveStr[len-1]) {
                            result = result.substr(0,start) + '*' + result.substr(k+1);
                            return true;
                        }
                    }
                }
            }
            l++;
            r = min(r+1, res_len);
            start = l;
        }
        
        return false;
    }
    
    // 待实现函数，在此函数中填入答题代码;
    string GetMaskedStr(const string &checkedStr, const string &sensitiveStr)
    {
        string result = checkedStr;
        while(SubstituteStr(result, sensitiveStr)) {}
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
    string checkedStr = ReadLine();
    string sensitiveStr = ReadLine();
    
    Solution solu;
    string result = solu.GetMaskedStr(checkedStr, sensitiveStr);
    cout << result;
    return 0;
}

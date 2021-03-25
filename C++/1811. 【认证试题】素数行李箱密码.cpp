/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2019-2019. All rights reserved.
 * Description: 上机编程题
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
 */
#include <vector>
#include <map>
#include <queue>
// 待实现函数，在此函数中填入答题代码

int Unlock(const string& initState, const string& dstState)
{
    vector<int> arr(10000,0);
    map<string, int> prime;
    int INTMAX = (1<<31) - 1;
    
    for(int i=4;i<10000;i+=2) {
        arr[i] = 1;
    }
    prime["0002"] = INTMAX;
    
    for(int i=3;i<10000;i+=2) {
        if(arr[i] == 0) {
            string temp = to_string(i);
            temp = string(4 - temp.size(), '0') + temp;
            prime[temp] = INTMAX;
            for(int j=3;j<10000/i+1;j+=2) {
                arr[i * j] = 1;
            }
        }
    }
    prime[initState] = 0;
    
    queue<string> q;
    q.push(initState);
    
    while(!q.empty()) {
        string s = q.front();
        q.pop();
        
        for(int i=0;i<4;++i) {
            string temp = s;
            for(int j=0;j<10;++j) {
                temp[i] = (j + '0');
                if(prime.count(temp) > 0 && prime[temp] > prime[s] + 1) {
                    prime[temp] = prime[s] + 1;
                    q.push(temp);
                }
            }
        }
    }
    
    
    return (prime[dstState] == INTMAX ? -1 : prime[dstState]);
}

// 以下为考题输入输出框架，此部分代码不建议改动
inline std::string ReadWord()
{
    std::string word;
    std::cin >> word;
    return word;
}

int main()
{
    string initState = ReadWord();
    string dstState = ReadWord();
    cout << Unlock(initState, dstState) << endl;
    return 0;
}

/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
 * Description: 考生实现代码
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
 */
// 待实现函数，在此函数中填入答题代码
#include <set>
vector<string> RegularID(vector<string>& inputs) 
{
    set<string> result;
    
    for(auto s:inputs) {
        string temp = "";
        for(auto c:s) {
            if(c != ' ') {
                temp += c;
            }
        }
        int flag = 0;
        if(temp.size() <= 9 && isalpha(temp[0]) && temp.size() > 1) {
            for(int i=1;i<temp.size();++i) {
                if(!isdigit(temp[i])) {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) {
                result.insert(char(tolower((temp[0]))) + string(9 - temp.size(), '0') + temp.substr(1));
            }
        }
        
    }
    
    return vector<string> (result.begin(), result.end());
}

// 以下为考题输入输出框架，此部分代码不建议改动
inline std::string ReadLine()
{
    std::string line;
    std::getline(std::cin, line);
    return line;
}

inline std::vector<std::string> ReadLines(int size)
{
    std::vector<std::string> lines(size);
    for (int i = 0; i < size; ++i) {
        lines[i] = ReadLine();
    }
    return lines;
}

inline std::vector<std::string> ReadCountedLines()
{
    std::string numberLine = ReadLine();
    int count = std::stoi(numberLine);
    return ReadLines(count);
}

int main()
{
    vector<string> inputs = ReadCountedLines();
    vector<string> results = RegularID(inputs);
    for (auto res : results) {
        cout << res << endl;
    }

    return 0;
}

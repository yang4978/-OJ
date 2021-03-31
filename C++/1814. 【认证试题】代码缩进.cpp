/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2019-2020. All rights reserved.
 * Description: 考生实现代码
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
 */
#include <iostream>
#include <vector>

using namespace std;
int GetMinStep(const vector<int> &steps)
{
    int res = 0;
    vector<int> ss(steps.begin(), steps.end());
    ss.push_back(0);
    int last = 0;
    int flag = 0;
    int maxNum = 0;
    int minNum = 0;

    for(auto n:ss) {
        if(flag == 0 && n < last) {
            flag = 1; 
            maxNum = last;
        } else if(flag == 1 && n > last) {
            res -= minNum;
            res += maxNum;
            maxNum = 0;
            minNum = last;
            flag = 0;
        }

        last = n;
    }
    
    return res + maxNum - minNum;
}

int main()
{
    int num;
    cin >> num;

    vector<int> steps;
    for (int i = 0; i < num; i++) {
        int step;
        cin >> step;

        steps.push_back(step);
    }

    cout << GetMinStep(steps) << endl;
  
    return 0;
}

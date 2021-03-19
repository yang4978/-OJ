/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2019-2020. All rights reserved.
 * Description: 考生实现代码
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
 */
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;
int GetMinSum(const vector<int> &array1, const vector<int> &array2, int k)
{
    vector<int> sum;
    
    for(auto x:array1) {
        for(auto y:array2) {
            sum.push_back(x+y);
        }
    }
    sort(sum.begin(), sum.end());
    
    
    return accumulate(sum.begin(), sum.begin()+k, 0);
}

int main()
{
    int size;
    cin >> size;
    vector<int> array1;
    int num;
    for (int loop = 0; loop < size; loop++) {
        cin >> num;
        array1.push_back(num);
    }
  
    cin >> size;
    vector<int> array2;
    for (int loop = 0; loop < size; loop++) {
        cin >> num;
        array2.push_back(num);
    }
    
    int k;
    cin >> k;
  
    cout << GetMinSum(array1, array2, k) << endl;
  
    return 0;
}

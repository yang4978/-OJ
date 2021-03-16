/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
 * Description: 上机编程认证
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
 */
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    // 待实现函数，在此函数中填入答题代码;
    float PhoneSellManage(float demand, const vector<float> &inventory, const vector<float> &price)
    {
        float salesSam = 0;
        map<float,float> phone;
        vector<float> rank;
        for(int i=0;i<inventory.size();++i) {    
            if(phone.count(price[i]/inventory[i]) == 0) {
                rank.push_back(price[i]/inventory[i]);
            }
            phone[price[i]/inventory[i]] += inventory[i];
            
        }
        sort(rank.begin(),rank.end());
        
        int i = rank.size() - 1;
        while(demand > 0 and i >= 0) {
            if(demand < phone[rank[i]]) {
                salesSam += demand * rank[i];
                break;
            }            
            salesSam += phone[rank[i]] * rank[i];
            demand -= phone[rank[i]];
            i--;
        }
        
        return salesSam;
    }
};

inline int ReadInt()
{
    int number;
    std::cin >> number;
    return number;
}

template<typename T>
inline std::vector<T> ReadVector(int size)
{
    std::vector<T> objects(size);
    for (int i = 0; i < size; ++i) {
        std::cin >> objects[i];
    }
    return objects;
}

int main()
{   
    int num;
    float demand;
    cin >> num >> demand;
    vector<float> inventory = ReadVector<float>(num);
    vector<float> price = ReadVector<float>(num);
    
    Solution solu;
    float result = solu.PhoneSellManage(demand, inventory, price);
    cout << result;
    return 0;
}

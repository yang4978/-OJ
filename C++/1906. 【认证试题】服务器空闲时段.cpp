/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
 * Description: 上机编程认证
 * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
 */
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution {
public:    
    vector<vector<int>> CombineTimeZone(vector<vector<int>>& times) //组合同一个服务器的工作时间段
                                                                    //如将[1, 4]和[2, 6]组合为[1, 6]
    {
        vector<vector<int>> result;
        
        if(times.size() == 0) {
            return times;
        }
        
        sort(times.begin(), times.end(), [](const vector<int> a, const vector<int> b) { //根据时间段的起始点排序
            return a[0] < b[0];                                                         //排序前：[1, 3], [6, 10], [5, 8], [3, 6]
        });                                                                             //排序后：[1, 3], [3, 6], [5, 8], [6, 10]
        
        int l = times[0][0];
        int r = times[0][1];
        int nl;
        int nr;
        
        for(auto arr:times) {
            nl = arr[0];
            nr = arr[1];
            if(nl <= r) {                                                              //如果时间段的起始点 <= 上一时间段的结束点
                r = max(r, nr);                                                        //合并
            } else {
                result.push_back(vector<int> {l, r});                                  //否则将上一时间段存入result
                r = nr;
                l = nl;
            }
        }
        result.push_back(vector<int> {l, r});
        return result;
    }
    
    // 待实现函数，在此函数中填入答题代码
    vector<pair<int, int>> GetOneFreeTime(int serverNum, const vector<vector<int>>& tasks)
    {
        map<int, vector<vector<int>>> time;
        vector<pair<int, int>> result;
        map<int, int> points;
        
        for(auto arr:tasks) {                                             //字典，key为服务器Id，value为[start, end]
            time[arr[2]].push_back(vector<int> {arr[0], arr[1]});
        }
        
        for(auto iter:time) {
            for(auto arr:CombineTimeZone(time[iter.first])) {            //将每个服务器的工作时间段整合后
                if(points.count(arr[0]) == 0) {                          //按照时间点统计服务器台数的变化值
                    points[arr[0]] = 1;                                  //每个服务器启动的时间点+1
                } else {                                                 //每个服务器关闭的时间点-1
                    points[arr[0]]++;                                    //即，在start到end期间，工作的服务器台数+1
                }
                if(points.count(arr[1]) == 0) {
                    points[arr[1]] = -1;                                
                } else {
                    points[arr[1]]--;
                }
            }            
        }
        
        int count = 0;
        int last = 0;
        for(auto iter:points) {                                         //对每个时间点进行统计
            count += iter.second;                                       //累加当前时间点的服务器变化值
            if(count == serverNum - 1) {                                //满足题意时
                if(last == 0) {                                         //如果last=0，说明该时间点前，服务器台数不满足条件
                    last = iter.first;                                  //该时间点为新时间段的起始点
                }                                                       //否则，该时间点前有符合条件的时间点，该时间点属于这一时间段
            } else {
                if(last != 0) {                                         //服务器台数不满足条件，且last！=0，说明该点是这一时间段的终结点
                    result.push_back(make_pair(last, iter.first));      //存入result
                    last = 0;                                           //初始化last
                }
            }
        }                
        return result;
    }
};

// 以下为考题输入输出框架，此部分代码不建议改动
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

inline void WriteVector(const std::vector<pair<int, int>>& objects)
{
    auto it = objects.begin();
    if (it == objects.end()) {
        return;
    }
    std::cout << it->first << ' ' << it->second;
    for (++it; it != objects.end(); ++it) {
        std::cout << endl << it->first << ' ' << it->second;
    }
    std::cout << std::endl;
}

int main()
{
    int serverNum = ReadInt();
    int taskNum = ReadInt();
    vector<vector<int>> tasks(taskNum);
    for (int i = 0; i < taskNum; ++i) {
        tasks[i] = ReadVector<int>(3);
    }
    Solution solu;
    auto result = solu.GetOneFreeTime(serverNum, tasks);
    if (result.empty()) {
        cout << "-1 -1";
    } else {
        WriteVector(result);
    }

    return 0;
}


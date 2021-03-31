"""
Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
Description: 请实现代码
Note: 缺省代码仅供参考，可自行决定使用、修改或删除
"""


class Solution:
    def get_min_step(self, steps):
        steps.append(0)
        res = 0
        max_num = 0
        min_num = 0
        flag = 0
        last = 0
        
        for n in steps:
            if(flag == 0 and n < last):
                flag = 1
                max_num = last
            elif(flag == 1 and n > last):
                flag = 0
                res = res + max_num - min_num
                max_num = 0
                min_num = last
            last = n
        
        return res + max_num - min_num


if __name__ == "__main__":
    count = input().strip()
    steps = list(map(int, input().strip().split()))
    function = Solution()
    results = function.get_min_step(steps)
    print(results)


'''
 Copyright (c) Huawei Technologies Co., Ltd. 2019-2020. All rights reserved.
 Description: 考生实现代码
 Note: 缺省代码仅供参考，可自行决定使用、修改或删除
'''

import math
class Solution:
    def transpose(self, items):
        temp = ""
        n = int(math.sqrt(len(items)))
        if n * n != len(items):
            return "ERROR"
        
        for i in range(n):
            for j in range(0, n * n, n):
                temp += items[i + j]
        
        return temp


if __name__ == "__main__":
    items = input().strip()
    function = Solution()
    result = function.transpose(items)
    print(result)


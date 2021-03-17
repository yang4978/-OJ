"""
Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
Description: 请实现代码
Note: 缺省代码仅供参考，可自行决定使用、修改或删除
"""


class Solution:
    def free_order(self, order_time):
        times = dict()
        
        for s in order_time:
            pre = s[:19]
            num = int(s[20:])
            if pre not in times:
                times[pre] = [num, 1]
            elif num < times[pre][0]:
                times[pre] = [num, 1]
            elif num == times[pre][0]:
                times[pre][1] += 1
        
        return sum(arr[1] for arr in times.values())


if __name__ == "__main__":
    size = int(input().strip())
    order_time = [input().strip() for _ in range(size)]
    function = Solution()
    results = function.free_order(order_time)
    print(results)


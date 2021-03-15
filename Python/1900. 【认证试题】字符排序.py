"""
Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
Description: 上机编程认证
Note: 缺省代码仅供参考，可自行决定使用、修改或删除
"""

class Solution:
    def character_sort(self, input_str):
        # 在此添加你的代码
        arr = [[] for _ in range(3)]
        index = []
        
        for c in input_str:
            if c.isdigit():
                index.append(0)
            elif c.islower():
                index.append(1)
            else:
                index.append(2)
            arr[index[-1]].append(c)
        
        
        for x in arr:
            x.sort(reverse = True)
        
        arr[1] = arr[2] + arr[1]
        
        return [arr[min(1,n)].pop() for n in index]


if __name__ == "__main__":
    input_str = str(input().strip())
    function = Solution()
    results = function.character_sort(input_str)
    print(str.join("", map(str, results)))


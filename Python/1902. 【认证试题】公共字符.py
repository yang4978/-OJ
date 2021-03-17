"""
Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
Description: 上机编程认证
Note: 缺省代码仅供参考，可自行决定使用、修改或删除
"""


class Solution:
    def get_n_times_character(self, n_value, strings):
        # 在此添加你的代码
        arr = set()
        if len(strings) > 0:
            for c in strings[0]:
                if strings[0].count(c) >= n_value:
                    arr.add(c)
        for s in strings:
            temp = set()
            for c in s:
                if s.count(c) >= n_value:
                    temp.add(c)
            arr &= temp
        return sorted(list(arr))
    
if __name__ == "__main__":
    n_value = int(input().strip())
    num = int(input().strip())
    strings = [input().strip() for _ in range(num)]
    function = Solution()
    results = function.get_n_times_character(n_value, strings)
    print("[" + str.join(" ", map(str, results)) + "]")


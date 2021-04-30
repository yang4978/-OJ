'''
 Copyright (c) Huawei Technologies Co., Ltd. 2019-2020. All rights reserved.
 Description: 考生实现代码
 Note: 缺省代码仅供参考，可自行决定使用、修改或删除
'''


class Solution:
    def longest_vowel_length(self, in_str):
        vowel = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
        res = 0
        l = 0
        for s in in_str:
            if s in vowel:
                l += 1
            else:
                res = max(res, l)
                l = 0
        
        return max(res, l)


if __name__ == "__main__":
    in_str = input().strip()
    function = Solution()
    result = function.longest_vowel_length(in_str)
    print(result)


'''
 Copyright (c) Huawei Technologies Co., Ltd. 2019-2020. All rights reserved.
 Description: 考生实现代码
 Note: 缺省代码仅供参考，可自行决定使用、修改或删除
'''


class Solution:
    def sort_student(self, heights, widths):
        result = [i for i in range(1, len(heights) + 1)]
        result = sorted(result, key = lambda x: (heights[x - 1], widths[x - 1]))
        
        return result


if __name__ == "__main__":
    count = int(input().strip())
    heights = list(map(int, input().strip().split(' ')))
    widths = list(map(int, input().strip().split(' ')))
    function = Solution()
    result = function.sort_student(heights, widths)
    print(' '.join(map(str, result)))


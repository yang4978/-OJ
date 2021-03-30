"""
Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
Description: 请实现代码
Note: 缺省代码仅供参考，可自行决定使用、修改或删除
"""


class Solution:
    def get_the_min_with_col_maxs(self, matrix):
        res = []
        
        for j in range(len(matrix[0])):
            temp = -10001
            for i in range(len(matrix)):
                temp = max(temp, matrix[i][j])
            res.append(temp)
        return min(res)

if __name__ == "__main__":
    n, m = map(int, input().strip().split())
    matrix = [list(map(int, input().strip().split())) for _ in range(n)]
    function = Solution()
    results = function.get_the_min_with_col_maxs(matrix)
    print(results)


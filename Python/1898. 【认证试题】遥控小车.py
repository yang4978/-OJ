"""
Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
Description: 上机编程认证
Note: 缺省代码仅供参考，可自行决定使用、修改或删除
"""


class Solution:
    def exec_command(self, commands):
        res = [0, 0]
        flag = len(commands) - len(commands) % 4 + 4
        for c in commands:
            if c == 'L':
                flag -= 1
            elif c == 'R':
                flag += 1
            else:
                res[flag % 2] += 1 if flag % 4 // 2 == 0 else -1
        return reversed(res)


if __name__ == "__main__":
    commands = str(input().strip())
    function = Solution()
    results = function.exec_command(commands)
    print("(" + str.join(",", map(str, results)) + ")")


"""
Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
Description: 上机编程认证
Note: 缺省代码仅供参考，可自行决定使用、修改或删除
"""


class Solution:
    def calculate(self, expression):
        # 在此添加你的代码
        # 有解时返回 True 和 计算结果；无解时返回 False 和 0
        ss = []
        arr = {'+' : 1, '-' : -1, '*': 2, '/': 3}
        temp = 0
        flag = 1
        expression += '+';
        
        for c in expression:
            if c.isdigit():
                temp = temp*10 + int(c)
            else:
                if flag == 2:
                    n = ss.pop()
                    ss.append(n * temp)
                elif flag == 3:
                    if temp == 0:
                        return [False, 0]
                    else:
                        n = ss.pop()
                        ss.append(n // temp)
                else:
                    ss.append(flag * temp)
                
                temp = 0
                
                flag = arr[c]
        return [True, sum(ss)]


if __name__ == "__main__":
    expression = str(input().strip())
    function = Solution()
    flag, result = function.calculate(expression)
    if flag:
        print(result)
    else:
        print("error")

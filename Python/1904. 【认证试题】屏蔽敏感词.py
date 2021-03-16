"""
Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
Description: 上机编程认证
Note: 缺省代码仅供参考，可自行决定使用、修改或删除
"""


class Solution:
    def substitute_str(self, result, check):
        l = 0
        r = min(2 * len(check) - 1,  len(result))
        
        while(l <= len(result) - len(check)):
            if(result[l] == check[0]):
                j = 0
                for i in range(l, r):
                    if result[i] == check[j]:
                        j += 1
                        
                    if j == len(check):
                        for k in range(r-1, i-1, -1):
                            if result[k] == check[-1]:
                                result = result[:l] + '*' + result[k+1:]

                                return [True, result]
            
            l += 1
            r = min(r + 1, len(result))
        return [False, result]   
    
    def get_masked_str(self, checked_str, sensitive_str):
        result = checked_str
        flag = True
        while(flag):
            flag, result = self.substitute_str(result, sensitive_str)
        return result


if __name__ == "__main__":
    checked_str = str(input().strip())
    sensitive_str = str(input().strip())
    function = Solution()
    results = function.get_masked_str(checked_str, sensitive_str)
    print(results)


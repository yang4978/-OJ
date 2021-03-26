'''
 Copyright (c) Huawei Technologies Co., Ltd. 2019-2020. All rights reserved.
 Description: 考生实现代码
 Note: 缺省代码仅供参考，可自行决定使用、修改或删除
'''


class Solution:
    def unlock(self, init_state, dst_state):
        arr = [0]*10000
        prime = dict()
        prime["0002"] = float('inf')
        
        for i in range(4, 10000, 2):
            arr[i] = 1
        
        for i in range(3, 10000, 2):
            if arr[i] == 0:
                temp = str(i)
                prime['0' * (4 - len(temp)) + temp] = float('inf')
                for j in range(2, 10000//i + 1):
                    if(i * j >= 10000):
                        continue
                    arr[i * j] = 1
        
        prime[init_state] = 0
        queue = [init_state]
        
        while queue:
            s = queue.pop(0)
            
            for i in range(4):
                for j in range(10):
                    temp = s[:i] + str(j) + s[i + 1:]
                    if(temp in prime and prime[s] + 1 < prime[temp]):
                        prime[temp] = prime[s] + 1
                        queue.append(temp)

        return prime[dst_state] if dst_state != float('inf') else -1


if __name__ == "__main__":
    init_state, dst_state = input().strip().split()
    function = Solution()
    result = function.unlock(init_state, dst_state)
    print(result)


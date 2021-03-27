'''
 Copyright (c) Huawei Technologies Co., Ltd. 2019-2020. All rights reserved.
 Description: 考生实现代码
 Note: 缺省代码仅供参考，可自行决定使用、修改或删除
'''


class Solution:
    def get_phone_record(self, records):
        call = dict()
        white = []
        for r in records:
            t, num = r
            if t == 'C':
                if num not in call:
                    call[num] = [0, 0]
                flag = 0
                for w in white:
                    if w[-1] == '*' and w[:-1] == num[:len(w)-1]:
                        call[num][0] += 1
                        flag = 1
                        break
                    elif w[-1] != '*' and w == num:
                        call[num][0] += 1
                        flag = 1
                        break
                if flag == 0:
                    call[num][1] += 1
                        
            else:
                white.append(num)
                
        return [key + " " + str(value[0]) + " " + str(value[1]) for key, value in call.items()]


if __name__ == "__main__":
    count = int(input().strip())
    records = [input().strip().split() for _ in range(count)]
    function = Solution()
    result = function.get_phone_record(records)
    print('\n'.join(map(str, result)))


'''
 Copyright (c) Huawei Technologies Co., Ltd. 2019-2020. All rights reserved.
 Description: 考生实现代码
 Note: 缺省代码仅供参考，可自行决定使用、修改或删除
'''


class Solution:
    def regular_id(self, card_ids):
        result = set()
        for temp in card_ids:
            s = ("").join(temp.split())
            if 1 <= len(s) <= 9 and s[0].isalpha() and s[1:].isdigit():
                result.add(s[0].lower() + (9 - len(s)) * '0' + s[1:])
        return sorted(list(result))


if __name__ == "__main__":
    count = int(input().strip())
    card_ids = [input().strip() for _ in range(count)]
    function = Solution()
    result = function.regular_id(card_ids)
    print('\n'.join(map(str, result)))


"""
Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
Description: 上机编程认证
Note: 缺省代码仅供参考，可自行决定使用、修改或删除
"""


class Solution:
    def point_sale_survey(self, total_sales, relation_map, appoint_sales):
        # 在此添加你的代码
        result = [1, 1]
        queue = [appoint_sales]
        layer = 1
        
        while queue:
            temp = 0
            layer += 1
            for _ in range(len(queue)):
                leader = queue.pop(0)
                for num, arr in relation_map.items():
                    if num == leader:
                        temp += len(arr)
                        queue += arr
            if temp > result[1]:
                result = [layer, temp]
        
        return result


if __name__ == "__main__":
    total_sales = int(input().strip())
    num = int(input().strip())
    relation_list = [input().strip().split() for _ in range(num)]
    relation_map = {node[0]: node[2:] for node in relation_list}
    appoint_sales = input().strip()
    function = Solution()
    results = function.point_sale_survey(total_sales, relation_map, appoint_sales)
    print("[" + str.join(" ", map(str, results)) + "]")


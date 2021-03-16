"""
Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
Description: 上机编程认证
Note: 缺省代码仅供参考，可自行决定使用、修改或删除
"""


class Solution:
    def phone_case_inventory_manage(self, demand, inventory, price):
        result = 0
        phone = dict()
        demand = float(demand)
        
        for i in range(len(price)):
            if price[i] / inventory[i] not in phone:
                phone[price[i] / inventory[i]] = inventory[i]
            else:
                phone[price[i] / inventory[i]] += inventory[i]

        for money in sorted(phone.keys(), reverse = True):
            num = phone[money]
            if demand > num:
                result += money * num
                demand -= num
            else:
                result += money * demand
                break
                   
        return result


if __name__ == "__main__":
    num0, demand = input().strip().split()
    inventory = list(map(float, input().strip().split()))
    price = list(map(float, input().strip().split()))
    function = Solution()
    results = function.phone_case_inventory_manage(demand, inventory, price)
    print(results)


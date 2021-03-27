"""
Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
Description: 请实现代码
Note: 缺省代码仅供参考，可自行决定使用、修改或删除
"""

import collections
class Solution:
    def combine_time_zone(self, times):
        result = []
        
        if not times:
            return times
        
        times.sort()
        
        l, r = times[0]
        
        for nl, nr in times:
            if nl <= r:
                r = max(r, nr)
            else:
                result.append([l, r])
                l = nl
                r = nr
        result.append([l, r])
        return result
    
    def get_one_free_time(self, server_num, task_num, task):
        time = collections.defaultdict(list)
        result = []
        
        for start, end, server_id in task:
            time[server_id].append([start, end])
        
        points = collections.defaultdict(int)

        for server_id, time_span in time.items():
            for start, end in self.combine_time_zone(time_span):
                points[start] += 1
                points[end] -= 1
        
        count = 0
        last = 0

        for time_spot in sorted(points.keys()):
            value = points[time_spot]
            count += value
            if count == server_num - 1:
                if last == 0:
                    last = time_spot
            else:
                if last != 0:
                    result.append([last, time_spot])
                    last = 0
            
        return result if result else [[-1, -1]]


if __name__ == "__main__":
    server_num = int(input().strip())
    task_num = int(input().strip())
    task = [list(map(int, input().strip().split())) for _ in range(task_num)]
    function = Solution()
    results = function.get_one_free_time(server_num, task_num, task)
    for value in results:
        print(str.join(" ", map(str, value)))

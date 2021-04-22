# If you need to import additional packages or classes, please import here.
import collections
def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    b = int(input())
    arr = list(map(int, input().split()))
    l = len(arr)
    cost = [float('inf')] * l
    cost[0] = 0
    path = collections.defaultdict(str)

    path[l - 1] = '-1'
    path[0] = '1'
    
    for i in range(l - 1):
        if arr[i] == -1:
            continue
        for j in range(1, min(1 + b, l - i)):
            if arr[i + j] == -1:
                continue
            c = cost[i] + arr[i + j]
            if c < cost[i + j]:
                cost[i + j] = c
                path[i + j] = path[i] + " " + str(i + j + 1)
            elif c == cost[i + j]:
                path[i + j] = min(path[i + j], path[i] + " " + str(i + j + 1))
    print(path[l - 1])
    
if __name__ == "__main__":
    func()

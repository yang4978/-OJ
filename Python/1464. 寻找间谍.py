# If you need to import additional packages or classes, please import here.
import collections
spy = [[0]*50000 for _ in range(3)]

def least_distance(arr,idx,n):
    l = 0
    r = n-1
    
    if idx >= arr[r]:
        return idx - arr[r]
    
    if idx <= arr[l]:
        return arr[l] - idx
    
    while l<=r:
        m = (l+r)//2
        if arr[m] < idx:
            l = m + 1
        else:
            r = m - 1
    return min(arr[l]-idx,idx-arr[l-1])


def func():
    while True:
        try:
            l = int(input())
            arr = map(int,input().split())
            n = int(input())
            num_len = [0]*3
            
            for i,num in enumerate(arr):
                spy[num-1][num_len[num-1]] = i
                num_len[num-1] += 1

            for _ in range(n):
                idx, num = map(int,input().split())
                if len(spy[num-1]) == 0:
                    print("-1")
                else:    
                    res = least_distance(spy[num-1],idx,num_len[num-1])
                    print(res)
        except EOFError:
            break
    
if __name__ == "__main__":
    func()

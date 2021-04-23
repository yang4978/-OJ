# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    n, m = map(int, input().split())
    arr = []
    
    for _ in range(n):
        arr.append(list(map(int, input().split())))
    
    arr.sort()
    
    dp = [0] * (m + 1)
    
    for k, s in arr:
        for i in range(m, 0, -1):
            if i >= k:
                dp[i] = max(dp[i], dp[i - k] + s)
            else:
                break
    print(dp[-1])
    
if __name__ == "__main__":
    func()

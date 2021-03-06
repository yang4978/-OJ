# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            arr = []
            for c in input().split():
                if c == 'A':
                    arr.append(1)
                elif c == 'T':
                    arr.append(10)
                elif c == 'J':
                    arr.append(11)
                elif c == 'Q':
                    arr.append(12)
                elif c == 'K':
                    arr.append(13)
                else:
                    arr.append(int(c))
            used = [0]*4
            flag = 0
            
            def dfs(res,used):
                if sum(used) == 4 and 24*0.995<=res<=24*1.005:
                    return True
                for i in range(4):
                    if used[i] == 0:
                        used[i] = 1
                        if(dfs(res+arr[i],used)):
                            return True
                        if(dfs(abs(res-arr[i]),used)):
                            return True
                        if(dfs(res*arr[i],used)):
                            return True
                        if(dfs(res/arr[i],used)):
                            return True
                        if(res and dfs(arr[i]/res,used)):
                            return True
                        used[i] = 0
                return False
            
            
            for i in range(4):
                used[i] = 1
                if(dfs(arr[i],used)):
                    flag = 1
                    break
                used[i] = 0
            print("Yes" if flag else "No")
        except EOFError:
            break
    
if __name__ == "__main__":
    func()

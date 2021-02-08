# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n,m = map(int,input().strip().split())
            W = input()
            arr = []
            for i in range(n):
                arr.append(list(input()))
            
            direction = [(-1,0),(1,0),(0,1),(0,-1)]
            
            used = [[0]*m for _ in range(n)]
            
            def dfs(x,y,W,id,used):
                if id == len(W):
                    return 1
                res = 0
                if arr[x][y] == W[id] and used[x][y] == 0:
                    used[x][y] = 1
                    for dx,dy in direction:
                        if 0<=x+dx<n and 0<=y+dy<m:
                            if dfs(x+dx,y+dy,W,id+1,used):
                                return 1
                    used[x][y] = 0
                return 0
            
            for x in range(n):
                for y in range(m):
                    if dfs(x,y,W,0,used) == 1:
                        print("YES")
                        return
            print("NO")
            return
            
        except EOFError:
            break

    
if __name__ == "__main__":
    func()

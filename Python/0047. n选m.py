# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            def dfs(index,used,arr,l):
                if l == m:
                    res.append(arr)
                    return
                if l+n-index < m:
                    return
                for i in range(index+1,n+1):
                    if used[i] == 0:
                        used[i] = 1
                        dfs(i,used,arr+[str(i)],l+1)
                        used[i] = 0
                
            res = []
            n,m = map(int,input().split())
            used = [0]*(n+1)
            dfs(0,used,[],0)
            
            for l in res:
                print((' ').join(l))
            
        except EOFError:
            break
    
if __name__ == "__main__":
    func()

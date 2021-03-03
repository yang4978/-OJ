# If you need to import additional packages or classes, please import here.
def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n = int(input())
            arr = [[0]*(n+1) for _ in range(n+1)]
            
            for i in range(1,n+1):
                for j in range(1,n+1):
                    if i==1 or j==1:
                        arr[i][j] = 1
                    elif i<j:
                        arr[i][j] = arr[i][i]
                    elif i==j:
                        arr[i][j] = 1+arr[i][j-1]
                    else:
                        arr[i][j] = arr[i-j][j] + arr[i][j-1]
            print(arr[n][n])
                
            
            
            
        except EOFError:
            break
    
if __name__ == "__main__":
    func()

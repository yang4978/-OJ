# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            arr = []
            n = int(input())
            for _ in range(n):
                arr.append(list(map(int,input().strip().split())))
            res = [0]*(n+1)
            
            for i in range(1,n+1):
                temp = float('inf')
                for j in range(i):
                    temp = min(temp,res[j]+arr[j][i-j-1])
                res[i] = temp
            print(res[-1])
            
        except:
            break
    
if __name__ == "__main__":
    func()

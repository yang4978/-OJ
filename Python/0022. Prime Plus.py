# If you need to import additional packages or classes, please import here.
'''埃拉托斯特尼筛法 
def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
           
            n = int(input())
            arr = bytearray((0 for _ in range(n+1)))
            arr[0] = 1
            arr[1] = 1
            for i in range(2,n+1):
                if arr[i] == 0:
                    for j in range(2,n//i+1):
                        arr[i*j] = 1
            
            print(arr.count(0))

            
            
        except EOFError:
            break
'''

# 欧拉筛选法
def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n = int(input())
            arr = bytearray((0 for _ in range(n+1)))
            prime = []
            for i in range(2,n+1):
                if arr[i] == 0:
                    prime.append(i)
                for p in prime:
                    if p*i > n:
                        break
                    arr[p*i] = 1
                    
                    if i%p == 0:
                        break
            
            print(len(prime))

            
            
        except EOFError:
            break
    
if __name__ == "__main__":
    func()

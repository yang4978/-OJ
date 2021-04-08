# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            T = int(input())
            for _ in range(T):
                n = int(input())
                arr = list(map(int, input().split()))
                arr.sort()
                print(int(0.5 + sum(arr[1:-1])/(n - 2)))
            
        except EOFError:
            break
    
if __name__ == "__main__":
    func()

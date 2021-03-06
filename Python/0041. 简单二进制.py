# If you need to import additional packages or classes, please import here.

def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n = int(input())
            res = 0
            while(n):
                res += n&1
                n >>= 1
            print(res)
        except EOFError:
            break
if __name__ == "__main__":
    func()

# If you need to import additional packages or classes, please import here.
'''
def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n = int(input())
            res = 2
            while n%2==0:
                res *= 2
                n //= 2
            print(res)
        
        except EOFError:
            break
'''
def func():
    # please define the python3 input here. 
    # For example: a,b = map(int, input().strip().split())
    # please finish the function body here.
    # please define the python3 output here. For example: print().
    while True:
        try:
            n = int(input())
            n *= 2
            print(n&-n)
        
        except EOFError:
            break
    
if __name__ == "__main__":
    func()
